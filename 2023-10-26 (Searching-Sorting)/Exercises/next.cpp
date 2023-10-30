// Implement an algorithm to output the "next" permutation of a sequence in lexicographical order. For instance, given the sequence [1,2,3], the next permutation is [1,3,2]. If the sequence is the last permutation (like [3,2,1]), output the first permutation ([1,2,3]).

#include <iostream>
using namespace std;

int main() {
    int numbers[] = {1, 2, 3};
    int length = sizeof(numbers) / sizeof(numbers[0]);

    int i = length - 2;

    while (i >= 0 && numbers[i] > numbers[i + 1]) {
        i--;
    }

    if (i >= 0) {
        int j = length - 1;

        while (numbers[j] < numbers[i]) {
            j--;
        }

        int temp = numbers[i];
        numbers[i] = numbers[j];
        numbers[j] = temp;
    }

    int start = i + 1;
    int end = length - 1;

    while (start < end) {
        int temp = numbers[start];
        numbers[start] = numbers[end];
        numbers[end] = temp;

        start++;
        end--;
    }

    for (int i = 0; i < length; i++) {
        cout << numbers[i] << " ";
    }

    return 0;
}