#include <iostream>
#include <string>

int main() {
    int number = -1;
    std::string name = "";

    std::cout << "Enter a number: ";
    std::cin >> number;

    for (int i = 1; i <= 10; i++) {
        std::cout << number << " x " << i << " = " << number * i << std::endl;
    }

    return 0;
}
