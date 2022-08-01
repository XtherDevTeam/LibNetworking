//
// Created by chou on 22-7-31.
//

#include <string>
#include "HostNoData.hpp"

namespace LibNetworking {
    HostNoData::HostNoData(const std::string &hostName) : LibNetworkException("Cannot find IP records with host name: " + hostName) {

    }

    const char *HostNoData::what() const noexcept {
        return LibNetworkException::what();
    }
} // LibNetworking