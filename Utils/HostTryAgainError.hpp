//
// Created by chou on 22-7-31.
//

#ifndef LIBNETWORKING_HOSTTRYAGAINERROR_HPP
#define LIBNETWORKING_HOSTTRYAGAINERROR_HPP

#include "LibNetworkException.hpp"

namespace LibNetworking {

    class HostTryAgainError : LibNetworkException {
    public:
        HostTryAgainError(const std::string &hostName);

        const char * what() const noexcept override;
    };

} // LibNetworking

#endif //LIBNETWORKING_HOSTTRYAGAINERROR_HPP
