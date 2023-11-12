#include <iostream>
using namespace std;

// Make an array of integers, then use a pointer p to point to a number in the middle of the array. What happens when you output p[x] for different values of x?
void printArray() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *p = &arr[2];

    for (int i = 0; i < 5; i++) {
        cout << p[i] << endl;
    }
}

// Write a function that returns a pointer to the maximum value of an unsorted array of doubles. Do not sort the array.
void returnPointer() {
    double arr[5] = {1.0, 2.0, 3.0, 4.0, 5.0};
    double *p = &arr[2];

    for (int i = 0; i < 5; i++) {
        cout << p[i] << endl;
    }
}

// Write a function that takes a string myString and a character pointer myCharPointer. The function returns a new pointer that points to the first appearance of myCharPointer’s character in myString.
// This won’t work;
// why ? Try using char *instead of string.

void *findFirstOccurrence() {
    string myString = "Hello World";
    char *myCharPointer = &myString[0];
    cout << myCharPointer << endl;
}

int main() {
    printArray();
    cout << endl;
    returnPointer();
    cout << endl;
    findFirstOccurrence();

    return 0;
}