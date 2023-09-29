#include <iostream>

// Write a function named "findOccurrences" that takes an integer array and a target value as parameters. The function should return the number of occurrences of the target value in the array.

int findOccurrences(int arr[], int length, int target) {
    int occurrences = 0;

    for (int i = 0; i < length; i++) {
        if (arr[i] == target) {
            occurrences++;
        }
    }

    return occurrences;
}

int main() {
    int myArray[] = {1, 2, 3, 4, 5, 5, 5};
    int length = sizeof(myArray) / sizeof(myArray[0]);

    std::cout << "Number of occurrences of 5: " << findOccurrences(myArray, length, 5) << "\n";
    std::cout << "Number of occurrences of 2: " << findOccurrences(myArray, length, 2) << "\n";
    std::cout << "Number of occurrences of 7: " << findOccurrences(myArray, length, 7) << "\n";
}