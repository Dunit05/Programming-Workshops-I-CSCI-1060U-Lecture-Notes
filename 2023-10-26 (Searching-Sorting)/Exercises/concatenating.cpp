// Write a function that checks if a given word can be formed by concatenating words from a list. For example, given the word "superman" and the list ["super", "man", "bat", "mobile"], the function should return true. Ensure the solution works for words that might have multiple concatenation possibilities.

#include <iostream>
#include <string>

bool canFormWord(const std::string &word, const std::string wordList[], int listSize) {
    if (word.empty()) {
        return true;
    }

    for (int i = 0; i < listSize; ++i) {
        const std::string &prefix = wordList[i];
        if (word.substr(0, prefix.length()) == prefix) {
            if (canFormWord(word.substr(prefix.length()), wordList, listSize)) {
                return true;
            }
        }
    }

    return false;
}

int main() {
    std::string word = "superman";
    std::string wordList[] = {"super", "man", "bat", "mobile"};
    int listSize = sizeof(wordList) / sizeof(wordList[0]);

    bool result = canFormWord(word, wordList, listSize);
    if (result) {
        std::cout << "The word can be formed from the list." << std::endl;
    } else {
        std::cout << "The word cannot be formed from the list." << std::endl;
    }

    return 0;
}
