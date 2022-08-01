//
// Created by chou on 22-7-31.
//

#include "SocketSendFailed.hpp"

namespace LibNetworking {
    SocketSendFailed::SocketSendFailed() : LibNetworkException("send() returned value -1") {

    }

    const char *SocketSendFailed::what() const noexcept {
        return LibNetworkException::what();
    }
} // LibNetworking