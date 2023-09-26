#include <iostream>

// Write a function named "swapValues" that takes two integer parameters and swaps their values. The function should use pass by reference to modify the values of the variables.

void swapValues(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int x = 5;
    int y = 10;
    swapValues(x, y);
    std::cout << x << std::endl;
    std::cout << y << std::endl;
    return 0;
}