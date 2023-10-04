#include <iostream>

// Write a function named "checkPalindrome" that takes a string as a parameter and returns a boolean indicating whether the string is a palindrome (reads the same forwards and backwards). Ignore spaces and punctuation.

bool checkPalindrome(std::string str) {
    std::string result;
    for (int i = 0; i < str.length(); i++) {
        if (isalpha(str[i])) {
            result += tolower(str[i]);
        }
    }
    for (int i = 0; i < result.length() / 2; i++) {
        if (result[i] != result[result.length() - 1 - i]) {
            return false;
        }
    }
    return true;
}

int main() {
    std::cout << checkPalindrome("racecar") << std::endl;
    // 1 = True
    // 2 = False
}