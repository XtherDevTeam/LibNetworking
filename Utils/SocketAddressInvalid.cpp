//
// Created by chou on 22-7-31.
//

#include "SocketAddressInvalid.hpp"

LibNetworking::SocketAddressInvalid::SocketAddressInvalid(const std::string &ErrorMessage) : LibNetworkException(
        ErrorMessage) {

}

const char *LibNetworking::SocketAddressInvalid::what() const noexcept {
    return LibNetworkException::what();
}
