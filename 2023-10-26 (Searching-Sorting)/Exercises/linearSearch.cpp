// Write a program that performs a linear search on an array of integers. Prompt the user to enter a number to search for, and then iterate through the array to find the number. If the number is found, display its index; otherwise, display a message indicating that the number was not found.

#include <iostream>
using namespace std;

int main() {
    int numbers[] = {5, 2, 4, 6, 1, 3};
    int length = sizeof(numbers) / sizeof(numbers[0]);
    int searchNumber;

    cout << "Enter a number to search for: ";
    cin >> searchNumber;

    for (int i = 0; i < length; i++) {
        if (numbers[i] == searchNumber) {
            cout << "Found at index " << i;
            return 0;
        }
    }

    cout << "Not found";

    return 0;
}