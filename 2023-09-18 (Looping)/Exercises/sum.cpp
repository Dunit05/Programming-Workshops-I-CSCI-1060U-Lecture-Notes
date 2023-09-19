#include <iostream>

int main() {
    // Use a while loop to calculate the sum of the first 100 natural numbers. Print the final sum to the console.
    int sum = 0;
    int i = 1;
    while (i < 100) {
        sum += i;
        i++;
    }
    std::cout << sum << std::endl;
}