#include <iostream>

// Write a function named "reverseArray" that takes an integer array as a parameter and reverses the order of its elements. Modify the array directly, without creating a new one.

void reverseArray(int arr[], int length) {
    int start = 0;
    int end = length - 1;

    while (start < end) {
        // Swap the elements at the start and end positions
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // Move the pointers towards each other
        start++;
        end--;
    }
}

int main() {
    int myArray[] = {1, 2, 3, 4, 5};
    int length = sizeof(myArray) / sizeof(myArray[0]);

    std::cout << "Original Array: ";
    for (int i = 0; i < length; i++) {
        std::cout << myArray[i] << " ";
    }

    reverseArray(myArray, length);

    std::cout << "\nReversed Array: ";
    for (int i = 0; i < length; i++) {
        std::cout << myArray[i] << " ";
    }
}