#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>

void word_reverser(std::string sentence) {
    std::istringstream stream(sentence);
    std::string word;
    std::vector<std::string> words;

    // Split the sentence into words
    while (stream >> word) {
        // If the word has 5 or more characters, reverse it
        if (word.length() >= 5) {
            std::reverse(word.begin(), word.end());
        }
        words.push_back(word);
    }

    // Join the words back into a sentence
    for (size_t i = 0; i < words.size(); ++i) {
        std::cout << words[i];
        if (i != words.size() - 1) {
            std::cout << " ";
        }
    }
    std::cout << std::endl;
}

int main() {
    std::string sdf = "doctor";
    word_reverser(sdf);  // This will reverse the word "doctor"
    return 0;
}
