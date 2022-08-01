//
// Created by chou on 22-7-31.
//

#include "SocketClient.hpp"
#include "../Utils/SocketOpenFailed.hpp"
#include "../Utils/SocketSendFailed.hpp"
#include "../Utils/SocketReceiveFailed.hpp"

namespace LibNetworking {
    std::mutex ClientReceiveLock;
    std::mutex ClientSendLock;

    SocketClient::SocketClient() : SocketFileNo(-1), ServerAddress() {

    }

    void SocketClient::Connect(const SocketAddress &RemoteAddress) {
        ServerAddress = RemoteAddress;
        SocketFileNo = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
        if (SocketFileNo == -1)
            throw SocketOpenFailed();

        ServerAddr.sin_family = AF_INET;
        ServerAddr.sin_addr.s_addr = inet_addr(ServerAddress.Host.c_str());
        ServerAddr.sin_port = htons(RemoteAddress.Port);

        if (connect(SocketFileNo, (sockaddr *) &ServerAddr, sizeof(ServerAddr)) == -1) {
            close(SocketFileNo);
            throw SocketOpenFailed();
        }
    }

    size_t SocketClient::Receive(char *Buffer, size_t RecvSize) const {
        ClientReceiveLock.lock();
        ssize_t result;
        if ((result = recv(SocketFileNo, Buffer, RecvSize, 0)) == -1)
            throw SocketReceiveFailed();
        ClientReceiveLock.unlock();
        return result;
    }

    size_t SocketClient::Send(char *Buffer, size_t SendSize) const {
        ClientSendLock.lock();
        ssize_t result;
        if ((result = send(SocketFileNo, Buffer, SendSize, 0)) == -1)
            throw SocketSendFailed();
        ClientSendLock.unlock();
        return result;
    }

    size_t SocketClient::Send(const std::string& Str) const {
        ClientSendLock.lock();
        ssize_t result;
        if ((result = send(SocketFileNo, Str.data(), Str.size(), 0)) == -1)
            throw SocketSendFailed();
        ClientSendLock.unlock();
        return result;
    }
} // LibNetworking