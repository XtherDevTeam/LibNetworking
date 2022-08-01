//
// Created by chou on 22-7-31.
//

#ifndef LIBNETWORKING_HOSTNORECOVERYERROR_HPP
#define LIBNETWORKING_HOSTNORECOVERYERROR_HPP

#include "LibNetworkException.hpp"

namespace LibNetworking {

    class HostNoRecoveryError : LibNetworkException {
    public:
        HostNoRecoveryError(const std::string &hostName);

        const char * what() const noexcept override;
    };

} // LibNetworking

#endif //LIBNETWORKING_HOSTNORECOVERYERROR_HPP
