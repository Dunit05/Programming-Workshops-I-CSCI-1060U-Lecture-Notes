#include <iostream>
using namespace std;

// What is a pointer?
// A pointer “points” to another variable
//         It is the address /
//     location of that variable in memory

// Write a function void swap_nums(int *x, int *y) which swaps the values of the integers referenced by x and y.

void swap_nums(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

// Write a function int* add_nums (int *x, int *y, int sum) which stores the addition of the variables referenced by x and y into sum. The function should return a pointer to sum. What is the problem with the returned pointer when you exit the function?

int *add_nums(int *x, int *y, int sum) {
    sum = *x + *y;
    return &sum;
}

int main() {
    // Write a program with two variables : i(an int initialized to 12) and p1(a pointer to an int).Set p1 to point to i and use p1 to change the value of i from 12 to 24.

    int i = 12;
    cout << i << endl;
    int *p1 = &i;
    *p1 = 24;
    cout << i << endl;

    // Create two pointers of the same type. What is the difference between the following: p1 = p2; *p1 = *p2; How does your answer change if p1 and p2 are different types ?

    int *p2 = &i;
    p1 = p2;   // p1 points to the same address as p2
    *p1 = *p2; // p1 points to the same value as p2
    // The answer doesn't change if p1 and p2 are different types
    cout << *p1 << endl;
    cout << *p2 << endl;

    // Write a function void swap_nums(int *x, int *y) which swaps the values of the integers referenced by x and y.
    swap_nums(p1, p2);
    cout << *p1 << endl;
    cout << *p2 << endl;

    // Write a function int* add_nums (int *x, int *y, int sum) which stores the addition of the variables referenced by x and y into sum. The function should return a pointer to sum. What is the problem with the returned pointer when you exit the function?

    int sum = 0;
    int *sum_ptr = add_nums(p1, p2, sum);
    cout << *sum_ptr << endl;

    return 0;
}