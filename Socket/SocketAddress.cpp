//
// Created by chou on 22-7-31.
//

#include "SocketAddress.hpp"
#include "../Utils/SocketAddressInvalid.hpp"

LibNetworking::SocketAddress::SocketAddress(std::string Host, short Port) : Host(std::move(Host)), Port(Port) {

}

LibNetworking::SocketAddress::SocketAddress(const std::string &Address) {
    size_t Delim;
    if ((Delim = Address.find(':')) == std::string::npos)
        throw SocketAddressInvalid("Cannot find delim `:` in address string");

    Host = Address.substr(0, Delim);
    short IPChecker = 0, Dot = 0;
    for (auto &I: Host) {
        if (IPChecker >= 256)
            throw SocketAddressInvalid("Invalid IP address format");

        if (isdigit(I)) {
            IPChecker *= 10;
            IPChecker += I - '0';
            continue;
        }
        else if (I == '.') {
            Dot++;
            continue;
        }
        else
            throw SocketAddressInvalid("Invalid IP address format");
    }
    if (Dot > 3 || IPChecker >= 256)
        throw SocketAddressInvalid("Invalid IP address format");

    int PortNo = std::stoi(Address.substr(Delim + 1));
    if (PortNo >= 65536 || PortNo < 0)
        throw SocketAddressInvalid("Invalid port number");

    Port = static_cast<short>(PortNo);
}

LibNetworking::SocketAddress::SocketAddress() = default;
