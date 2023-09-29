#include <iostream>

// Write a function named "findMaxValue" that takes an integer array as a parameter and returns the maximum value in the array.

int findMaxValue(int array[], int size) {
    int max = array[0];
    for (int i = 0; i < size; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    return max;
}

int main() {
    int array[5] = {1, 2, 3, 4, 5};
    std::cout << "The max value in the array is: " << findMaxValue(array, 5) << std::endl;
}