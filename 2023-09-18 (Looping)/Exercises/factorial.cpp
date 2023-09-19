#include <iostream>

int main() {
    // Use a while loop to find the factorial of a given number, let's say 6. Calculate its factorial and print the result to the console.
    int num = 6;
    int factorial = 1;
    int i = 1;
    while (i <= num) {
        factorial *= i;
        i++;
    }
    std::cout << factorial << std::endl;
}