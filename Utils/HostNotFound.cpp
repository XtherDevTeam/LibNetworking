//
// Created by chou on 22-7-31.
//

#include "HostNotFound.hpp"

namespace LibNetworking {
    HostNotFound::HostNotFound(const std::string &hostName) : LibNetworkException("Host not found: " + hostName) {

    }

    const char *HostNotFound::what() const noexcept {
        return LibNetworkException::what();
    }
} // LibNetworking