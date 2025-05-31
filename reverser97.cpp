#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>

void word_reverser(std::string str) {
    std::istringstream iss(str);
    std::vector<std::string> words;
    std::string word;
    
    // Splitting the string into words
    while (iss >> word) {
        if (word.length() >= 5) {
            std::reverse(word.begin(), word.end());
        }
        words.push_back(word);
    }
    
    // Joining words back into a sentence
    for (size_t i = 0; i < words.size(); ++i) {
        std::cout << words[i];
        if (i != words.size() - 1) {
            std::cout << " ";
        }
    }
    std::cout << std::endl;
}

int main() {
    std::string input;
    std::cout << "Enter a sentence: ";
    std::getline(std::cin, input);
    
    word_reverser(input);
    
    return 0;
}