//
// Created by chou on 22-7-31.
//

#include "SocketReceiveFailed.hpp"

LibNetworking::SocketReceiveFailed::SocketReceiveFailed() : LibNetworkException("recv() returned value -1"){

}

const char *LibNetworking::SocketReceiveFailed::what() const noexcept {
    return LibNetworkException::what();
}
