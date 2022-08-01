//
// Created by chou on 22-7-31.
//

#ifndef LIBNETWORKING_SOCKETCLIENT_HPP
#define LIBNETWORKING_SOCKETCLIENT_HPP

#include <string>
#include <mutex>
#include "../Utils/NetworkApi.hpp"
#include "SocketAddress.hpp"

namespace LibNetworking {
    extern std::mutex ClientReceiveLock;
    extern std::mutex ClientSendLock;

    class SocketClient {
        /**
         * @biref Server address in LibNetworking::SocketAddress
         */
        SocketAddress ServerAddress;
        /**
         * @biref Server address in sockaddr_in
         */
        sockaddr_in ServerAddr;
        /**
         * @biref Socket file number
         */
        int SocketFileNo;
    public:
        SocketClient();

        void Connect(const LibNetworking::SocketAddress &RemoteAddress);

        size_t Receive(char* Buffer, size_t RecvSize) const;

        size_t Send(char* Buffer, size_t SendSize) const;

        size_t Send(const std::string& Str) const;
    };

} // LibNetworking

#endif //LIBNETWORKING_SOCKETCLIENT_HPP
