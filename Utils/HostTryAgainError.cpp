//
// Created by chou on 22-7-31.
//

#include "HostTryAgainError.hpp"

namespace LibNetworking {
    HostTryAgainError::HostTryAgainError(const std::string &hostName) : LibNetworkException("A temporary error occurred on an authoritative name server with hostname: " + hostName + " Try again later.") {

    }

    const char *HostTryAgainError::what() const noexcept {
        return LibNetworkException::what();
    }
} // LibNetworking