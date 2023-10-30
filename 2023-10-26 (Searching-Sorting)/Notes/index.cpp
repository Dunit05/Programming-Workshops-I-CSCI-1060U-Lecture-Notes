#include <ctime>
#include <iostream>

int main() {
    // Create an array of 1000 random numbers. Use a Linear Search to find and return the index of a number you choose to find, or output that the number isn’t there.

    // Linear Search: O(n)
    srand(time(NULL));
    int arr[1000];
    int num;
    int index = -1;

    for (int i = 0; i < 1000; i++) {
        arr[i] = rand() % 1000;
    }

    std::cout << "Enter a number to search for: ";
    std::cin >> num;

    for (int i = 0; i < 1000; i++) {
        if (arr[i] == num) {
            index = i;
            break;
        }
    }

    if (index == -1) {
        std::cout << "Number not found." << std::endl;
    } else {
        std::cout << "Number found at index " << index << std::endl;
    }

    // Create a sorted array of 1000 numbers. Use a Binary Search to find and return the index of a number you choose to find, or print that the number isn’t there. Then, use the Linux time command to compare the two search algorithms.

    // Binary Search: O(log n)
    int arr2[1000];

    for (int i = 0; i < 1000; i++) {
        arr2[i] = rand() % 1000;
    }

    for (int i = 0; i < 1000; i++) {
        for (int j = i; j < 1000; j++) {
            if (arr2[i] > arr2[j]) {
                int temp = arr2[i];
                arr2[i] = arr2[j];
                arr2[j] = temp;
            }
        }
    }

    std::cout << "Enter a number to search for: ";
    std::cin >> num;

    int low = 0;
    int high = 999;
    index = -1;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr2[mid] == num) {
            index = mid;
            break;
        } else if (arr2[mid] < num) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (index == -1) {
        std::cout << "Number not found." << std::endl;
    } else {
        std::cout << "Number found at index " << index << std::endl;
    }

    // Implement Bubble Sort for an array of 10 random numbers. Enter your code into Pythontutor.com and follow the execution step by step.

    // Bubble Sort: O(n^2)
    int arr3[10];

    for (int i = 0; i < 10; i++) {
        arr3[i] = rand() % 1000;
    }

    for (int i = 0; i < 10; i++) {
        for (int j = i; j < 10; j++) {
            if (arr3[i] > arr3[j]) {
                int temp = arr3[i];
                arr3[i] = arr3[j];
                arr3[j] = temp;
            }
        }
    }

    for (int i = 0; i < 10; i++) {
        std::cout << arr3[i] << " ";
    }

    // Implement Selection Sort for an array of 10 random numbers. Enter your code into Pythontutor.com and follow the execution step by step. Finally, compare the time to run the two sorting algorithms using over 1000 numbers.

    // Selection Sort: O(n^2)
    int arr4[10];

    for (int i = 0; i < 10; i++) {
        arr4[i] = rand() % 1000;
    }

    for (int i = 0; i < 10; i++) {
        int min = arr4[i];
        int minIndex = i;
        for (int j = i; j < 10; j++) {
            if (arr4[j] < min) {
                min = arr4[j];
                minIndex = j;
            }
        }
        int temp = arr4[i];
        arr4[i] = arr4[minIndex];
        arr4[minIndex] = temp;
    }

    for (int i = 0; i < 10; i++) {
        std::cout << arr4[i] << " ";
    }

    return 0;
}
