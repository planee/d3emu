#include <time.h>

#include "net/server.h"

#include "services/base_service.h"
#include "services/authentication_service.h"
#include "services/channel_invitation_service.h"
#include "services/user_manager_service.h"
#include "services/game_master_service.h"
#include "services/followers_service.h"
#include "services/friends_service.h"
#include "services/presence_service.h"
#include "services/storage_service.h"
#include "services/toon_external_service.h"

int main(int argc, char **argv)
{
	srand((unsigned int)time(0));
    
    boost::asio::io_service io_service;
    d3emu::net::Server server(io_service, "127.0.0.1", 6543);

    if (server.Init())
    {
		// Initialize services
        server.services_manager().Bind(new d3emu::services::AuthenticationService(0x0DECFC01, 0));
        server.services_manager().Bind(new d3emu::services::ChannelInvitationService(0x83040608, 0));
        server.services_manager().Bind(new d3emu::services::UserManagerService(0x3E19268A, 0));
        server.services_manager().Bind(new d3emu::services::GameMasterService(0x810CB195, 0));
        server.services_manager().Bind(new d3emu::services::ToonExternalService(0x4124C31B, 0));
        server.services_manager().Bind(new d3emu::services::FollowersService(0xE5A11099, 0));
        server.services_manager().Bind(new d3emu::services::FriendsService(0xA3DDB1BD, 0));
        server.services_manager().Bind(new d3emu::services::PresenceService(0xFA0796FF, 0));
        server.services_manager().Bind(new d3emu::services::StorageService(0xDA6E4BB9, 0,
			new d3emu::services::StorageDatabaseEngine()));

        boost::system::error_code ec;
        do {
            io_service.run(ec);
        } while (!ec);
    }
    
	return 0;
}
