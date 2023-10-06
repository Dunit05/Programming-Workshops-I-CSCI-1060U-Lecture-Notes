#include <iostream>

// Write a function named "isInRange" that checks if a given number is within a specific range.Create at least three test cases with different inputs, including boundary values and values outside the range, to ensure the function handles them correctly.For example :

//     Test Case 1 : Input : 5,
//     Range : [ 1, 10 ], Expected Output : true Test Case 2 : Input : 20, Range : [ 1, 10 ], Expected Output : false Test Case 3 : Input : 1, Range : [ 1, 10 ], Expected Output : true

bool isInRange(int n, int min, int max) {
    return n >= min && n <= max;
}

int main() {
    std::cout << isInRange(5, 1, 10) << std::endl;
    std::cout << isInRange(20, 1, 10) << std::endl;
    std::cout << isInRange(1, 1, 10) << std::endl;
}