#include <iostream>
#include <sstream>

int main() {
    std::cout << "Hello world" << std::endl;

    std::stringstream ss;
    ss << "welcome";
    ss << "ようこそ";
    std::cout << ss.str() << std::endl;
}