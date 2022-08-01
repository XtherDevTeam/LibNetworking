//
// Created by chou on 22-7-31.
//

#ifndef LIBNETWORKING_SOCKETADDRESSINVALID_HPP
#define LIBNETWORKING_SOCKETADDRESSINVALID_HPP


#include "LibNetworkException.hpp"

namespace LibNetworking {
    class SocketAddressInvalid : LibNetworkException {
    public:
        SocketAddressInvalid(const std::string &ErrorMessage);

        const char * what() const noexcept override;
    };
}


#endif //LIBNETWORKING_SOCKETADDRESSINVALID_HPP
