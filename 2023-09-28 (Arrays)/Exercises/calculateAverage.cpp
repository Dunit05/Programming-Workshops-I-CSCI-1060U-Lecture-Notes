#include <iostream>

// Write a function named "calculateAverage" that takes an integer array as a parameter and returns the average value of the elements in the array.

int calculateAverage(int array[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += array[i];
    }
    return sum / size;
}

int main() {
    int array[5] = {1, 2, 3, 4, 5};
    std::cout << "The average value in the array is: " << calculateAverage(array, 5) << std::endl;
}