#include <iostream>

// Arrays are a collection of elements of the same type

int numbers[4] = {0, 10, 23, 31};                                       // This is a declaration of an array of integers
char charArray[5];                                                      // This is a declaration of an array of characters
char lettersArray[2][4] = {{'a', 'b', 'c', 'd'}, {'e', 'f', 'g', 'h'}}; // This is a declaration of a 2D array of characters
int numbersArray[2][3] = {{1, 2, 3}, {4, 5, 6}};                        // This is a declaration of a 2D array of integers

// Calculate teh sum of the numbers in the numbers array
int sum() {
    int sum = 0;
    for (int i = 0; i < 4; i++) {
        sum += numbers[i];
    }
    return sum;
}

// Prompt the user for five letters, and put each letter in the array. Then, identify which letter comes alphabetically last. ignoring case
void letters() {
    for (int i = 0; i < 5; i++) {
        std::cout << "Enter a letter: ";
        std::cin >> charArray[i];
    }
    char lastLetter = charArray[0];
    for (int i = 0; i < 5; i++) {
        if (charArray[i] > lastLetter) {
            lastLetter = charArray[i];
        }
    }
    std::cout << "The last letter is: " << lastLetter << std::endl;
}

// Add matrices
int addMatrices() {
    int sum = 0;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; i < 3; j++) {
            sum += numbersArray[i][j];
        }
    }
    return sum;
}

int main() {
    // Printing the array via index
    std::cout << numbers[0] << std::endl;
    std::cout << numbers[1] << std::endl;
    std::cout << numbers[2] << std::endl;
    std::cout << numbers[3] << std::endl;
    std::cout << lettersArray[0][0] << std::endl; // Prints 'a' from the 2D array
    std::cout << "The sum is = " << sum() << std::endl;
    letters();
    std::cout << "The sum of the numbers in the numbersArray is: " << addMatrices() << std::endl;

    // Check size of array
    std::cout << "The size of the array is: " << sizeof(numbers) << std::endl;
    // Determine the number of elements in the array
    std::cout << "The number of elements in the array is: " << sizeof(numbers) / sizeof(numbers[0]) << std::endl;

    return 0;
}
