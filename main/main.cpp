#include <iostream>
#include <sstream>  //string

int main() {
    std::cout << "Hello world" << std::endl;

    std::stringstream ss;
    ss << "welcome";
    std::cout << ss.str() << std::endl;
}