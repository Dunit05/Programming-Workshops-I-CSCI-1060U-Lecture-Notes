#include <iostream>
#include <string>

// String

// Write a function which takes as a parameter a string in the form of a logical expression, such as "2>5" or "1!=5", and returns true if the statement is true and false otherwise. Assume the only operators are ==, !=, <, and >, and each value is a single positive digit.
void logicalExpression(std::string str) {
    int num1 = str[0] - '0';
    int num2 = str[2] - '0';
    char op = str[1];
    bool result;
    switch (op) {
    case '>':
        result = num1 > num2;
        break;
    case '<':
        result = num1 < num2;
        break;
    case '=':
        result = num1 == num2;
        break;
    case '!':
        result = num1 != num2;
        break;
    }
    std::cout << result << std::endl;
}

// Write a program that takes a word as input from the user, and calculates the number of capital letters in the word.What happens if the user tries to enter a string with multiple words ?

int countCapitalLetters(std::string str) {
    int count = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            count++;
        }
    }
    return count;
}

// Write a program to get individual words from the user until they enter the word “STOP”. Then, output a string containing each word the user typed separated by spaces.
std::string getWords() {
    std::string str;
    std::string result;
    while (str != "STOP") {
        std::cin >> str;
        if (str != "STOP") {
            result += str + " ";
        }
    }
    return result;
}

//  Write a function void delChar(string word, char letter) that transforms word by deleting all instances of letter from it. For example, delChar("aardvark", 'a') would change the word to “rdvrk”.
void delChar(std::string word, char letter) {
    std::string result;
    for (int i = 0; i < word.length(); i++) {
        if (word[i] != letter) {
            result += word[i];
        }
    }
    std::cout << result << std::endl;
}

int main() {
    std::string str = "Hello";
    std::string str2 = "World";
    // Printing the string
    std::cout << str << std::endl;
    // String Methods
    std::cout << str.length() << std::endl;
    std::cout << str[0] << std::endl;
    std::cout << str.find("llo") << std::endl;
    std::cout << str.substr(1, 3) << std::endl;
    std::cout << str.substr(1) << std::endl;
    std::cout << str.append(str2) << std::endl;
    std::cout << str.erase(1, 3) << std::endl;
    std::cout << str.insert(1, "ey") << std::endl;
    std::cout << str.find("llo") << std::endl;
    std::cout << str.compare(str2) << std::endl;

    // Logical Expression
    logicalExpression("2>5");

    // Count Capital Letters
    std::cout << countCapitalLetters("Hello") << std::endl;

    // Get Words
    std::cout << getWords() << std::endl;

    // Delete Character
    delChar("aardvark", 'a');

    return 0;
}