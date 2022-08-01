//
// Created by chou on 22-7-31.
//

#ifndef LIBNETWORKING_SOCKETSENDFAILED_HPP
#define LIBNETWORKING_SOCKETSENDFAILED_HPP

#include "LibNetworkException.hpp"

namespace LibNetworking {

    class SocketSendFailed : LibNetworkException {
    public:
        SocketSendFailed();

        const char * what() const noexcept override;
    };

} // LibNetworking

#endif //LIBNETWORKING_SOCKETSENDFAILED_HPP
