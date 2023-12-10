#include <iostream>

using namespace std;

// Write a recursive function to sum the digits of a positive integer. You may not use any loops.

int sumDigits(int n) {
    if (n < 10) {
        return n;
    }
    return n % 10 + sumDigits(n / 10);
}

// Write a recursive function repeat(string s, int t) that prints out the string s a total of t times. You may not use any loops.

void repeat(string s, int t) {
    if (t == 0) {
        return;
    }
    cout << s << endl;
    repeat(s, t - 1);
}

// Write a recursive function that performs a linear search. You may not use any loops.

int linearSearch(int arr[], int size, int target) {
    if (size == 0) {
        return -1;
    }
    if (arr[size - 1] == target) {
        return size - 1;
    }
    return linearSearch(arr, size - 1, target);
}

int main() {
    cout << sumDigits(1234) << endl;
    repeat("Hello", 5);
    int arr[] = {1, 2, 3, 4, 5};
    cout << linearSearch(arr, 5, 3) << endl;
}