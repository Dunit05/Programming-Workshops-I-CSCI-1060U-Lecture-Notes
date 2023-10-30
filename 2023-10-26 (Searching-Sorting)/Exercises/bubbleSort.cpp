// Write a program that sorts an array of integers in ascending order using the bubble sort algorithm. Implement the bubble sort algorithm by comparing adjacent elements and swapping them if they are in the wrong order. Repeat this process until the array is fully sorted. Test the algorithm with a sample array and display the sorted result.

#include <iostream>
using namespace std;

int main() {
    int numbers[] = {5, 2, 4, 6, 1, 3};
    int length = sizeof(numbers) / sizeof(numbers[0]);

    for (int i = 0; i < length - 1; i++) {
        for (int j = 0; j < length - i - 1; j++) {
            if (numbers[j] > numbers[j + 1]) {
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < length; i++) {
        cout << numbers[i] << " ";
    }

    return 0;
}