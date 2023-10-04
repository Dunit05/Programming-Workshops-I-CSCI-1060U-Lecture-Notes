#include <iostream>

// Write a function named "findSubstring" that takes two strings as parameters: "mainString" and "subString". The function should return the index of the first occurrence of "subString" in "mainString". Use the find() method.

int findSubstring(std::string mainString, std::string subString) {
    return mainString.find(subString);
}

int main() {
    std::cout << findSubstring("Hello", "llo") << std::endl;
    return 0;
}