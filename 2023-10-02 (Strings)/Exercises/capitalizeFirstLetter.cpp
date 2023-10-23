#include <iostream>

// Write a function named "capitalizeFirstLetter" that takes a string as a parameter and returns a new string with the first letter of each word capitalized. Use the toupper() method.

std::string capitalizeFirstLetter(std::string str) {
    std::string result;
    for (int i = 0; i < str.length(); i++) {
        if (i == 0 || str[i - 1] == ' ') {
            result += toupper(str[i]);
        } else {
            result += str[i];
        }
    }
    return result;
}

int main() {
    std::cout << capitalizeFirstLetter("hello world") << std::endl;
    return 0;
}