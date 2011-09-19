#include "BaseService.h"
#include "Service.h"

#include <iostream>
#include <ctime>
#include <iomanip>

#ifdef _WIN32
#include <WinSock2.h>
#else
#include <sys/socket.h>
#endif

namespace d3emu 
{
    BaseService::BaseService(uint32_t _service_hash, uint8_t _service_id)
        : Service(_service_hash, _service_id) 
    {
    }

    PacketResponse *BaseService::Request(Client &client, PacketRequest &request_packet)
    {
        PacketResponse *response_packet = 0;
        
        switch (request_packet.header().method_id())
        {
            case 0x01:
            {
                request_packet.set_message(new bnet::protocol::connection::ConnectRequest());
                if (request_packet.mutable_message()->ParseFromString(request_packet.message_data()))
                    response_packet = this->ConnectRequest(client, request_packet);
                else
                    request_packet.clear_message();
                break;
            }
                
            case 0x02:
            {
                bnet::protocol::connection::BindRequest request;
                if (request_packet.mutable_message()->ParseFromString(request_packet.message_data()))
                    response_packet = this->BindRequest(client, request_packet);
                else
                    request_packet.clear_message();
                break;
            }
        }
        
        return response_packet;
    }

    PacketResponse *BaseService::ConnectRequest(Client &client, PacketRequest &request_packet)
    {
        bnet::protocol::connection::ConnectResponse *response =
            new bnet::protocol::connection::ConnectResponse();
        response->mutable_server_id()->set_label(388207126);
        response->mutable_server_id()->set_epoch((uint32_t)time(0));
        response->mutable_client_id()->set_label(client.socket());
        response->mutable_client_id()->set_epoch((uint32_t)time(0));
        
        PacketResponse *response_packet = new PacketResponse();
        response_packet->set_message(response);
        // NOTE: Since this is the base service, service_id should always be 0.
        response_packet->mutable_header()->set_service_id(0x00);
        response_packet->mutable_header()->set_method_id(request_packet.header().method_id());
        response_packet->mutable_header()->set_request_id(request_packet.header().request_id());
        
        return response_packet;
    }

    PacketResponse *BaseService::BindRequest(Client &client, PacketRequest &request_packet)
    {
        bnet::protocol::connection::BindResponse *response =
            new bnet::protocol::connection::BindResponse();
        
        bnet::protocol::connection::BindRequest *bind_request = 
            dynamic_cast<bnet::protocol::connection::BindRequest *>(request_packet.message());
        
        if (this->manager())
        {
            for (int i = 0; i < bind_request->imported_service_hash_size(); i++)
            {
                uint8_t service_id = this->manager()->bound_service_id(bind_request->imported_service_hash(i));
                if (service_id)
                {
                    std::cout << "Bound service: " << (int)service_id << ": "
                        << this->manager()->bound_service(service_id)->Name() << std::endl;
                    response->add_imported_service_id((google::protobuf::uint32)service_id);
                }
            }
        }
        
        PacketResponse *response_packet = new PacketResponse();
        response_packet->set_message(response);
        // NOTE: Since this is the base service, service_id should always be 0.
        response_packet->mutable_header()->set_service_id(0x00);
        response_packet->mutable_header()->set_method_id(request_packet.header().method_id());
        response_packet->mutable_header()->set_request_id(request_packet.header().request_id());
        
        return response_packet;
    }

    std::string BaseService::Name() const
    {
        return std::string("d3emu.BaseService");
    }
}