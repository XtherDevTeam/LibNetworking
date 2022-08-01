//
// Created by chou on 22-7-31.
//

#ifndef LIBNETWORKING_SOCKETADDRESS_HPP
#define LIBNETWORKING_SOCKETADDRESS_HPP

#include <string>

namespace LibNetworking {
    class SocketAddress {
    public:
        std::string Host;
        short Port;

        SocketAddress(std::string Host, short Port);

        SocketAddress(const std::string &Address);

        SocketAddress();
    };
}

#endif //LIBNETWORKING_SOCKETADDRESS_HPP
