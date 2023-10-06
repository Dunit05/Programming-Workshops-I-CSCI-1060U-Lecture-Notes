#include <iostream>

// Week 5a - Testing and Debugging
//               Write a function named "factorial" that calculates the factorial of a number.Create at least three test cases with known inputs and expected outputs to verify the correctness of the function.For example :

//     Test Case 1 : Input : 5,
//     Expected Output : 120 Test Case 2 : Input : 0, Expected Output : 1 Test Case 3 : Input : 10, Expected Output : 3628800

double factorial(double n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    std::cout << factorial(5) << std::endl;
    std::cout << factorial(0) << std::endl;
    std::cout << factorial(10) << std::endl;
}
