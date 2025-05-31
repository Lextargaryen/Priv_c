#include <iostream>
#include <array>
#include <sstream>
#include <string>
#include <cmath>
using namespace std;

std::string base_core(std::string val , int base_1 , int base_2);

int main() {
    base_core("101" , 8 , 5);  
}

constexpr std::array<std::string_view, 16> symbols_ = {
    "0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "A", "B", "C", "D", "E", "F"
};


std::string base_core(std::string val , int base_1 , int base_2) {
    std::stringstream str_ ;
    int val_b10 = 0 ;
    for (int i = 1; i <= val.length(); i++) {
    val_b10 += pow(base_1, i - 1) * (val[val.length() - i] - '0');
    }
    cout << val_b10 << endl;
    return "0";
    //auto it_ = std::find(symbols_.begin(), symbols_.end(), token_);
    
}

