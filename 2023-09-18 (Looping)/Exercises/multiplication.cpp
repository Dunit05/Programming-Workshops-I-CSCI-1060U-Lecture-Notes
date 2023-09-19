#include <iostream>

int main() {
    // Use a for loop to print the multiplication table of a given number, let's say 5. Print the multiplication table from 1 to 10.
    int num = 5;
    for (int i = 1; i <= 10; i++) {
        std::cout << num << " * " << i << " = " << num * i << std::endl;
    }
}