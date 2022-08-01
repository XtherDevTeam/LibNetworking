//
// Created by chou on 22-7-31.
//

#include "LibNetworkException.hpp"

LibNetworking::LibNetworkException::LibNetworkException(const std::string &ErrorMessage) : ErrorMessage(ErrorMessage) {

}

const char *LibNetworking::LibNetworkException::what() const noexcept {
    return ErrorMessage.c_str();
}
