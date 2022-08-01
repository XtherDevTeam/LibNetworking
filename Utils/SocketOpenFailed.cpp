//
// Created by chou on 22-7-31.
//

#include "SocketOpenFailed.hpp"

LibNetworking::SocketOpenFailed::SocketOpenFailed() : LibNetworking::LibNetworkException("Cannot open socket") {

}

const char *LibNetworking::SocketOpenFailed::what() const noexcept {
    return LibNetworkException::what();
}
