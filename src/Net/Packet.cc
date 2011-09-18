#include "Packet.h"

namespace d3emu
{
	// PacketHeaderResponse

	PacketHeaderResponse::PacketHeaderResponse()
	{
		memset(this->mutable_bytes_, 0, 5);
	}

	void PacketHeaderResponse::set_request_id(uint8_t request_id)
	{
		this->request_id_ = request_id;
	}

	void PacketHeaderResponse::set_message_size(uint8_t message_size)
	{
		this->message_size_ = message_size;
	}

	void PacketHeaderResponse::set_method_id(uint8_t method_id)
	{
		this->method_id_ = method_id;
	}

	void PacketHeaderResponse::set_service_id(uint8_t service_id)
	{
		this->service_id_ = service_id;
	}

	uint8_t PacketHeaderResponse::service_id() const
	{
		return this->service_id_;
	}

	uint8_t PacketHeaderResponse::method_id() const
	{
		return this->method_id_;
	}

	uint8_t PacketHeaderResponse::request_id() const
	{
		return this->request_id_;
	}

	uint8_t PacketHeaderResponse::message_size() const
	{
		return this->message_size_;
	}

	std::string PacketHeaderResponse::SerializeAsString() const
	{
		return std::string(this->mutable_bytes_, this->mutable_bytes_ + 5);
	}

	uint8_t *PacketHeaderResponse::mutable_bytes()
	{
		return this->mutable_bytes_;
	}

	// PacketHeaderRequest
}