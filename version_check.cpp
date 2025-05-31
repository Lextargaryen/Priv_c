#include <iostream>

int main() {
    std::cout << "C++ version: " << __cplusplus << std::endl;
    
    if (__cplusplus == 199711L) {
        std::cout << "C++98 or C++03" << std::endl;
    } 
    else if (__cplusplus == 201103L) {
        std::cout << "C++11" << std::endl;
    } else if (__cplusplus == 201402L) {
        std::cout << "C++14" << std::endl;
    } 
    
    
    else if (__cplusplus == 20170L) {
        std::cout << "C++17" << std::endl;
    
    
    
    } else if (__cplusplus == 202002L) {
        std::cout << "C++20" << std::endl;
    } else {
        std::cout << "Unknown C++ version" << std::endl;
    }
    
    return 0;
}
