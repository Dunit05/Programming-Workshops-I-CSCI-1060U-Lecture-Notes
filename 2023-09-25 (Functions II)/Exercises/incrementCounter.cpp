#include <iostream>

// declare a global variable named "counter" and initialize it to 0. In a separate cell, write a function named "incrementCounter" that increments the value of "counter" by 1. Then, call the function multiple times to observe the changes in the global variable's value.

int counter = 0;

void incrementCounter() {
    counter++;
}

int main() {
    incrementCounter();
    incrementCounter();
    incrementCounter();
    incrementCounter();
    incrementCounter();
    incrementCounter();
    incrementCounter();
    incrementCounter();
    incrementCounter();
    incrementCounter();
    std::cout << counter << std::endl;
    return 0;
}