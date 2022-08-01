//
// Created by chou on 22-7-31.
//

#ifndef LIBNETWORKING_HOSTNODATA_HPP
#define LIBNETWORKING_HOSTNODATA_HPP

#include "LibNetworkException.hpp"

class LibNetworkingException;
namespace LibNetworking {

    class HostNoData : LibNetworkException {
    public:
        HostNoData(const std::string &hostName);

        const char * what() const noexcept override;
    };

} // LibNetworking

#endif //LIBNETWORKING_HOSTNODATA_HPP
