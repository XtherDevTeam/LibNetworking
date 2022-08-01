//
// Created by chou on 22-7-31.
//

#ifndef LIBNETWORKING_HOSTNOTFOUND_HPP
#define LIBNETWORKING_HOSTNOTFOUND_HPP

#include "LibNetworkException.hpp"

namespace LibNetworking {

    class HostNotFound : LibNetworkException {
    public:
        HostNotFound(const std::string &hostName);

        const char * what() const noexcept override;
    };

} // LibNetworking

#endif //LIBNETWORKING_HOSTNOTFOUND_HPP
