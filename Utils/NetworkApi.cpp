//
// Created by chou on 22-7-31.
//

#include <cstring>
#include <netdb.h>
#include "NetworkApi.hpp"
#include "HostNotFound.hpp"
#include "HostNoData.hpp"
#include "HostTryAgainError.hpp"
#include "HostNoRecoveryError.hpp"

#if defined(_WIN32)
class WinSockInit
{
        WSADATA _wsa;
    public:
        WinSockInit() {
            WSAStartup(MAKEWORD(2, 0), &_wsa);

        }
        ~WinSockInit() {
            WSACleanup();
        }
    } __WSAInitalization;
#endif

namespace LibNetworking {
    std::vector<std::string> NetworkAPI::GetIPAddressByHost(const std::string &host) {
        std::vector<std::string> IPs;
        hostent *structure;
        sockaddr_in sAddr{};
        structure = gethostbyname(host.c_str());
        if (structure == nullptr) {
            switch (h_errno) {
                case HOST_NOT_FOUND:
                    throw HostNotFound(host);
                case NO_DATA:
                    throw HostNoData(host);
                case NO_RECOVERY:
                    throw HostNoRecoveryError(host);
                case TRY_AGAIN:
                    throw HostTryAgainError(host);
            }
        }
        for (size_t i = 0; structure->h_addr_list[i]; i++) {
            memcpy(&sAddr.sin_addr.s_addr, structure->h_addr_list[i], structure->h_length);
            IPs.emplace_back(inet_ntoa(sAddr.sin_addr));
        }
        return IPs;
    }
} // LibNetworking