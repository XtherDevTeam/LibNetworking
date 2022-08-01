//
// Created by chou on 22-7-31.
//

#ifndef LIBNETWORKING_NETWORKAPI_HPP
#define LIBNETWORKING_NETWORKAPI_HPP

#if defined(_WIN32)
#include <WinSock2.h>
#include <WS2tcpip.h>
#include <windows.h>
#define close closesocket

#define errno GetLastError()
#define h_errno GetLastError()
#else
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#endif

#include <string>
#include <vector>

namespace LibNetworking {

    class NetworkAPI {
    public:
        /**
         * Get IP address with domain or hostname
         * @param host hostname or domain
         * @return A list of the IP record of host
         */
        static std::vector<std::string> GetIPAddressByHost(const std::string& host);
    };

} // LibNetworking

#endif //LIBNETWORKING_NETWORKAPI_HPP
