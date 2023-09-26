#include <iostream>

// Write a program with a function called twoTimes that takes an integer parameter value, doubles it, then prints that value. In another cell, call twoTimes(value), then print the integer again.

void twoTimes(int value) {
    value *= 2;
    std::cout << value << std::endl;
}

// Use C++’s built-in sizeof() function to determine the size of some common variable types (e.g. sizeof(int)). Then create two variables of the same type and print their addresses.

void sizeOf() {
    std::cout << sizeof(int) << std::endl;
    std::cout << sizeof(double) << std::endl;
    std::cout << sizeof(float) << std::endl;
    std::cout << sizeof(char) << std::endl;
    std::cout << sizeof(bool) << std::endl;
}

// Write a program that gets an integer from the user. Then, write a Pass-By-Value function that takes the integer as a parameter, prints its address, squares the integer, and returns it. Repeat this process with a Pass-By-Reference function.

// ! Pass-By-Value: A copy of the variable is passed into the function. The original variable is not changed.
int squareNumValue(int x) {
    std::cout << &x << std::endl;
    x *= x;
    return x;
}

// ! Pass-By-Reference: The original variable is passed into the function. The original variable is changed.
int squareNumRef(int &x) {
    std::cout << &x << std::endl;
    x *= x;
    return x;
}

// Write a function that has a parameter with the same name as a global variable from another cell. In this function, modify the variable and print it out. In a subsequent cell, call the function, then print the variable again.
int num = 5;
void modifyNum() {
    num *= 2;
    std::cout << num << std::endl;
}

int main() {
    int value = 5;
    twoTimes(value);
    std::cout << value << std::endl;
    sizeOf();
    std::cout << squareNumValue(value) << std::endl;
    std::cout << squareNumRef(value) << std::endl;
    modifyNum();
    std::cout << num << std::endl;

    // Address Identifier: &(veriable);
    int num = 5;
    std::cout << &num << std::endl;
    return 0;
}
