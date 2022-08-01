//
// Created by chou on 22-7-31.
//

#include "HostNoRecoveryError.hpp"

namespace LibNetworking {
    HostNoRecoveryError::HostNoRecoveryError(const std::string &hostName) : LibNetworkException("A nonrecoverable name server error occurred with hostname: " + hostName) {

    }

    const char *HostNoRecoveryError::what() const noexcept {
        return LibNetworkException::what();
    }
} // LibNetworking