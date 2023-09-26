#include <iostream>

// declare a variable named "x" and assign it a value. In another cell, write a function named "printX" that takes a parameter "x" and prints it. Call the function to observe the output.

int x = 5;

void printX(int x) {
    std::cout << x << std::endl;
}

int main() {
    printX(x);
    return 0;
}