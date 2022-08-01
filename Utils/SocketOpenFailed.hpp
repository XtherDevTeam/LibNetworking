//
// Created by chou on 22-7-31.
//

#ifndef LIBNETWORKING_SOCKETOPENFAILED_HPP
#define LIBNETWORKING_SOCKETOPENFAILED_HPP

#include "LibNetworkException.hpp"

namespace LibNetworking {
    class SocketOpenFailed : LibNetworking::LibNetworkException {
    public:
        SocketOpenFailed();

        const char * what() const noexcept override;
    };
}

#endif //LIBNETWORKING_SOCKETOPENFAILED_HPP
