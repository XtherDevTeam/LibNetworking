//
// Created by chou on 22-7-31.
//

#ifndef LIBNETWORKING_SOCKETRECEIVEFAILED_HPP
#define LIBNETWORKING_SOCKETRECEIVEFAILED_HPP

#include "LibNetworkException.hpp"

namespace LibNetworking {
    class SocketReceiveFailed : LibNetworkException {
    public:
        SocketReceiveFailed();

        const char * what() const noexcept override;
    };
}

#endif //LIBNETWORKING_SOCKETRECEIVEFAILED_HPP
