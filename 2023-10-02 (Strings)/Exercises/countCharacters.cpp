#include <iostream>

// Write a function named "countCharacters" that takes a string as a parameter and returns the number of characters in the string. Use the length() method.

int countCharacters(std::string str) {
    return str.length();
}

int main() {
    std::cout << countCharacters("Hello") << std::endl;
    return 0;
}