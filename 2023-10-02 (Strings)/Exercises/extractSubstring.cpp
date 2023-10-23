#include <iostream>

// Write a function named "extractSubstring" that takes a string as a parameter and returns a substring starting from index 3 and having a length of 5. Use the substr() method.

std::string extractSubstring(std::string str) {
    return str.substr(3, 5);
}

int main() {
    std::cout << extractSubstring("Hello") << std::endl;
    return 0;
}