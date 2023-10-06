#include <iostream>

// Write a program that sorts an array of integers in order. Add print statements before and after each pass to track the sorting progress. Print the array before and after each pass to identify any errors in the sorting process. Use a small array of integers (e.g., [5, 2, 8, 3, 1]) to debug the code and ensure it correctly sorts the array.

int main() {
    int array[] = {5, 2, 8, 3, 1};
    int size = sizeof(array) / sizeof(array[0]);
    int temp;

    for (int i = 0; i < size; i++) {
        std::cout << "Pass " << i + 1 << std::endl;
        for (int j = 0; j < size - 1; j++) {
            if (array[j] > array[j + 1]) {
                std::cout << "Swapping " << array[j] << " and " << array[j + 1] << std::endl;
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
            std::cout << "Array: ";
            for (int k = 0; k < size; k++) {
                std::cout << array[k] << " ";
            }
            std::cout << std::endl;
        }
    }
    return 0;
}