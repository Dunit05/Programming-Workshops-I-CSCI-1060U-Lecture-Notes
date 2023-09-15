#include <iostream>

int main() {
    // Write an expression that evaluates to true if a given char variable is an upper-case letter.
    char letter = 'A';
    bool isUpper = (letter >= 'A') && (letter <= 'Z');
    // bool isUpper = isupper(letter); <- This is a function from the cctype library
    // (latter >= 'A') && (letter <= 'Z'); <- Jupyter Notebook Expression

    if (isUpper) {
        // printf("The letter is upper-case.\n");
        // << std::endl; <- End line, new line, flushes the buffer
        std::cout << "The letter is upper-case." << std::endl;
    } else {
        // printf("The letter is not upper-case.\n");
        // << std::endl; <- End line, new line, flushes the buffer
        std::cout << "The letter is not upper-case." << std::endl;
    }

    // Write a program that initializes a character, then prints a message only if the character is an upper-case letter.
    char letter2 = 'a';
    if (isupper(letter2)) { // <- Or ((letter2 >= 'A') && (letter2 <= 'Z'))
        std::cout << "The letter \"" << letter2 << "\" is upper-case." << std::endl;
    } else {
        std::cout << "The letter \"" << letter2 << "\" is not upper-case." << std::endl;
    }

    // Write a program that compares two integers, and prints out a sentence to say which is larger.
    // If the first integer is larger, also print a message if their difference is less than 4.
    int num1 = 8;
    int num2 = 10;

    if (num1 > num2) {
        std::cout << "The first number is larger." << std::endl;
        if (num1 - num2 < 4) {
            std::cout << "The difference between the two numbers is less than 4." << std::endl;
        }
    } else if (num1 < num2) {
        std::cout << "The second number is larger." << std::endl;
        if (num2 - num1 < 4) {
            std::cout << "The difference between the two numbers is less than 4." << std::endl;
        }
    } else {
        std::cout << "The two numbers are equal." << std::endl;
    }

    // Write a program that uses a variable representing a letter grade, then uses a switch statement to make an amusing comment about how well that student is doing in the course. Don’t forget to account for invalid letter grades.
    char grade = 'A';
    switch (grade) {
    case 'A':
        std::cout << "You're doing great!" << std::endl;
        break;
    case 'B':
        std::cout << "You're doing good." << std::endl;
        break;
    case 'C':
        std::cout << "You're doing okay." << std::endl;
        break;
    case 'D':
        std::cout << "You're doing bad." << std::endl;
        break;
    case 'F':
        std::cout << "You're failing." << std::endl;
        break;
    default:
        std::cout << "Invalid grade." << std::endl;
        break;
    }
}