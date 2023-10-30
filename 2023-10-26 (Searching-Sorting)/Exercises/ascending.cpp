// Write a program that sorts an array of integers in ascending order using the selection sort algorithm. Implement the selection sort algorithm by finding the minimum element in each pass and swapping it with the first unsorted element. Repeat this process until the array is fully sorted. Test the algorithm with a sample array and display the sorted result.

#include <iostream>
using namespace std;

int main() {
    int numbers[] = {5, 2, 4, 6, 1, 3};
    int length = sizeof(numbers) / sizeof(numbers[0]);

    for (int i = 0; i < length - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < length; j++) {
            if (numbers[j] < numbers[minIndex]) {
                minIndex = j;
            }
        }

        int temp = numbers[i];
        numbers[i] = numbers[minIndex];
        numbers[minIndex] = temp;
    }

    for (int i = 0; i < length; i++) {
        cout << numbers[i] << " ";
    }

    return 0;
}