#include <iostream>

int main() {
    int count = 5;

    // For Loops
    for (int i = 0; i < count; i++) { // Initialization; Condition; Increment
        /* code in body of for loop */
        std::cout << "Hello World!" << std::endl;
    }

    // Write a program that uses a for loop to compute the sum of the even numbers between 0 and 20000 (inclusive). Then write another two different loops that do the same thing.
    int sum = 0;
    for (int i = 0; i <= 20000; i += 2) {
        sum += i;
    }
    std::cout << sum << std::endl;

    sum = 0;
    for (int i = 0; i <= 20000; i++) {
        if (i % 2 == 0) {
            sum += i;
        }
    }
    std::cout << sum << std::endl;

    sum = 0;
    for (int i = 0; i <= 10000; i++) {
        sum += i * 2;
    }

    // While Loops
    while (count > 0) { // Condition
        /* code in body of while loop */
        std::cout << "Hello World!" << std::endl;
        count--;
    }

    // Write a program that initializes a large number x and a small number y, then uses a while loop to find the largest number smaller than x that is divisible by y.
    int x = 100;
    int y = 3;
    while (x % y != 0) {
        x--;
    }
    std::cout << x << std::endl;

    // Go back to your first program that used for loops, and create a while loop that solves the same problem (computing the sum of even numbers below or equal to 20000).
    sum = 0;
    int i = 0;
    while (i <= 20000) {
        if (i % 2 == 0) {
            sum += i;
        }
        i++;
    }

    // Do-While Loops
    do {
        std::cout << "Hello World!" << std::endl;
    } while (count > 0);

    // Write a program that uses a do - while loop to halve an integer and print its value until the number reaches 0.
    int num = 100;
    do {
        std::cout << num << std::endl;
        num /= 2;
    } while (num > 0);
}