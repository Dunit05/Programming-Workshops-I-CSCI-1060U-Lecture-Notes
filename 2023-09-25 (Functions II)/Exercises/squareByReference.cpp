#include <iostream>

// Write a function named "squareByReference" that takes an integer as a parameter and modifies it to store the square of that number. The function should use pass by reference.+

int squareByReference(int &x) {
    x *= x;
    return x;
}

int main() {
    int num = 5;
    std::cout << squareByReference(num) << std::endl;
    return 0;
}