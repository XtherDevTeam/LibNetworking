#include <iostream>

#include "Utils/NetworkApi.hpp"
#include "Socket/SocketClient.hpp"

using namespace LibNetworking;

int main() {
    std::vector<char> Buffer(1048576);
    std::vector<std::string> IPs = NetworkAPI::GetIPAddressByHost("www.xiaokang00010.top");
    return 0;
}
