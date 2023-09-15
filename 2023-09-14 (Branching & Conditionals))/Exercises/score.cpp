#include <iostream>

int main() {
    // Declare a variable "score" and assign it a value between 0 and 100. Write an if-else statement to print "Pass" if "score" is greater than or equal to 60, and "Fail" otherwise.
    int score = 50;

    if (score >= 60) {
        std::cout << "Pass" << std::endl;
    } else {
        std::cout << "Fail" << std::endl;
    }
}