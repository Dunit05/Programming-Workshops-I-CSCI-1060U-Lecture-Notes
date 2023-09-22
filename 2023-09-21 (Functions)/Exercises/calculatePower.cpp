#include <iostream>

// Write an overloaded function named "calculatePower" that calculates the power of a number. The function should accept two parameters: base and exponent. Implement the function for both integer and float data types. The function should return the calculated result.

int calculatePower(int base, int exponent) {
    int result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

float calculatePower(float base, float exponent) {
    float result = 1;
    for (int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

int main() {
    std::cout << calculatePower(5, 5) << std::endl;
    std::cout << calculatePower(5.0f, 5.0f) << std::endl;
    return 0;
}