// Implement an algorithm to rotate an array to the right by k steps, where k is a non-negative integer specified by the user. Try to achieve this as efficiently as possible, i.e. without using a second array. For example, given the array [1,2,3,4,5,6,7] and k = 3, the result would be [5,6,7,1,2,3,4].

#include <iostream>
using namespace std;

int main() {
    int numbers[] = {1, 2, 3, 4, 5, 6, 7};
    int length = sizeof(numbers) / sizeof(numbers[0]);
    int k;

    cout << "Enter k: ";
    cin >> k;

    for (int i = 0; i < k; i++) {
        int temp = numbers[length - 1];

        for (int j = length - 1; j > 0; j--) {
            numbers[j] = numbers[j - 1];
        }

        numbers[0] = temp;
    }

    for (int i = 0; i < length; i++) {
        cout << numbers[i] << " ";
    }

    return 0;
}