//
// Created by chou on 22-7-31.
//

#ifndef LIBNETWORKING_LIBNETWORKEXCEPTION_HPP
#define LIBNETWORKING_LIBNETWORKEXCEPTION_HPP

#include <exception>
#include <string>

namespace LibNetworking {
    class LibNetworkException : public std::exception {
        std::string ErrorMessage;
    public:
        LibNetworkException(const std::string &ErrorMessage);

        const char * what() const noexcept override;
    };
}

#endif //LIBNETWORKING_LIBNETWORKEXCEPTION_HPP
