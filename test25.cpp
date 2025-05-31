#include <iostream>
#include <string>
#include <bitset>
using std::string;
using std::cout;

std::string binaryToBase10(const std::string& binaryStr) {
    std::bitset<32> bits(binaryStr);
    unsigned long decimalValue = bits.to_ulong();
    return std::to_string(decimalValue);
}

string uint32_to_ip(uint32_t ip)
{
  std::bitset<32> binary(ip);
  
  return binaryToBase10(binary.substr(0,8));
} 

int main(){}