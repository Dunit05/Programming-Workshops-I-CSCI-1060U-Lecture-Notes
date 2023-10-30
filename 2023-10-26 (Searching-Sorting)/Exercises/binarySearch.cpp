// Write a program that performs a binary search on a sorted array of integers. Prompt the user to enter a number to search for, and then use the binary search algorithm to find the number. Implement the binary search algorithm iteratively by dividing the array in half and narrowing down the search range until the number is found or determined to be absent. Display the index of the number if found; otherwise, display a message indicating that the number was not found.

#include <iostream>
using namespace std;

int main() {
    int numbers[] = {2, 5, 6, 9, 3, 7};
    int length = sizeof(numbers) / sizeof(numbers[0]);
    int searchNumber;
    int low = 0;
    int high = length - 1;

    cout << "Enter a number to search for: ";
    cin >> searchNumber;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (numbers[mid] == searchNumber) {
            cout << "Found at index " << mid;
            return 0;
        } else if (numbers[mid] < searchNumber) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    cout << "Not found";

    return 0;
}