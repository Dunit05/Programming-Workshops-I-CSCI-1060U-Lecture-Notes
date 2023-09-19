#include <iostream>

int main() {
    // Use a for loop to print the numbers from 1 to 10 to the console.
    for (int i = 1; i <= 10; i++) {
        std::cout << i << std::endl;
    }

    // Use a do - while loop to print the numbers from 1 to 10 to the console.
    int i = 1;
    do {
        std::cout << i << std::endl;
        i++;
    } while (i <= 10);
}