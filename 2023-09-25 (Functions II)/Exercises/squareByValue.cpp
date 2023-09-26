#include <iostream>

// Write a function named "squareByValue" that takes an integer as a parameter and returns the square of that number. The function should use pass by value.

int squareByValue(int x) {
    return x * x;
}

int main() {
    int num = 5;
    std::cout << squareByValue(num) << std::endl;
    return 0;
}