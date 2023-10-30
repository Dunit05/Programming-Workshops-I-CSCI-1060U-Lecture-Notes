// Write a program that sorts an array of integers in ascending order using the insertion sort algorithm. Implement the insertion sort algorithm by iteratively inserting each element into its correct position within the already sorted subarray. Test the algorithm with a sample array and display the sorted result.

#include <iostream>
using namespace std;

int main() {
    int numbers[] = {5, 2, 4, 6, 1, 3};
    int length = sizeof(numbers) / sizeof(numbers[0]);

    for (int i = 1; i < length; i++) {
        int key = numbers[i];
        int j = i - 1;

        while (j >= 0 && numbers[j] > key) {
            numbers[j + 1] = numbers[j];
            j--;
        }

        numbers[j + 1] = key;
    }

    for (int i = 0; i < length; i++) {
        cout << numbers[i] << " ";
    }

    return 0;
}