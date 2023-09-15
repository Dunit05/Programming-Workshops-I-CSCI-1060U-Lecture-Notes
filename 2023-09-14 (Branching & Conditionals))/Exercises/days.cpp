#include <iostream>

int main() {
    // Write an if statement that checks if a variable "age" is greater than or equal to 18. If true, print "You are eligible to vote" to the console. Otherwise, print "You are not eligible to vote."
    int age = 10;

    if (age >= 18) {
        std::cout << "You are eligible to vote!" << std::endl;
    } else {
        std::cout << "You are not eligible to vote!" << std::endl;
    }
}