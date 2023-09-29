#include <iostream>

// Write a function named "countEvenNumbers" that takes an integer array as a parameter and returns the number of even numbers in the array.

int countEvenNumbers(int array[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (array[i] % 2 == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int array[5] = {1, 2, 3, 4, 5};
    std::cout << "The number of even numbers in the array is: " << countEvenNumbers(array, 5) << std::endl;
}