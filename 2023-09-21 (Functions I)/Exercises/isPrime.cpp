#include <cmath>
#include <iostream>

// Write a function named "isPrime" that takes an integer as a parameter and returns a boolean value indicating whether the number is prime or not. The function should return a boolean value.

bool isPrime(int myInt) {
    if (myInt == 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(myInt); i++) {
        if (myInt % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    std::cout << isPrime(5) << std::endl;
    return 0;
}

// 1 = True
// 0 = False