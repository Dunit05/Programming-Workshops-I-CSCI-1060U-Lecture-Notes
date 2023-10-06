#include <iostream>
#include <string>

double myFunction(double num) {
    return floor(sqrt(num));
}

bool testFunction(double num) {
    if (myFunction(num) == sqrt(num)) {
        return true;
    } else {
        return false;
    }
}

// Take the sample code from the public folder and inject print statements to help you find the bug.
void flawedSort(int arr[], int size) {
    int i = 1;
    while (i < size - 1) {
        std::cout << "i: " << i << std::endl;
        int minIndex = i;
        int j = i + 1;
        while (j < size) {
            std::cout << "j: " << j << std::endl;
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
                std::cout << "minIndex: " << minIndex << std::endl;
            }
            j++;
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
        i++;
    }
}

int main() {
    // get two random numbers,
    // One from 0-4 and another from 5-9

    int num1 = rand() % 5;
    int num2 = rand() % 5 + 5;
    int sum = num1 + num2;
    int diff = num1 - num2;
    printf("The sum of %d and %d is %d\n", num1, num2, sum);
    printf("%d is %d more than %d\n\n\n", num1, diff, num2);

    // Suppose someone is going to give you a function called squareRoot that calculates and returns the floor of the square root of a number.
    // Write test cases that will verify the code is correct.

    // 1. Test with a perfect square
    // std::cout << myFunction(4) << std::endl;
    std::cout << testFunction(4) << std::endl;

    // 2. Test with a non-perfect square
    // std::cout << myFunction(5) << std::endl;
    std::cout << testFunction(5) << std::endl;
}