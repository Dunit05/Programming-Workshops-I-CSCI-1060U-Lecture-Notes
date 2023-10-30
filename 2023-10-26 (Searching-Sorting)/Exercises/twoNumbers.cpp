// Implement a function that, given an array of integers, finds two numbers in the array that add up to a specific target sum. The function should return the index of the first of these numbers. If no such pair exists, return -1.

#include <iostream>
using namespace std;

int findSum(int numbers[], int length, int targetSum) {
    for (int i = 0; i < length - 1; i++) {
        for (int j = i + 1; j < length; j++) {
            if (numbers[i] + numbers[j] == targetSum) {
                return i;
            }
        }
    }

    return -1;
}

int main() {
    int numbers[] = {5, 2, 4, 6, 1, 3};
    int length = sizeof(numbers) / sizeof(numbers[0]);
    int targetSum = 10;

    int index = findSum(numbers, length, targetSum);

    if (index == -1) {
        cout << "No such pair exists";
    } else {
        cout << "Found at index " << index;
    }

    return 0;
}