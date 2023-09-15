#include <iostream>

int main() {
    // Declare a variable "month" and assign it a value from 1 to 12, representing the months of the year. Use a switch statement to print the corresponding season to the console. For example, if "month" is 3, print "Spring."
    int month = 5;

    switch (month) {
    case 1:
    case 2:
    case 3:
        std::cout << "Spring" << std::endl;
        break;
    case 4:
    case 5:
    case 6:
        std::cout << "Summer" << std::endl;
        break;
    case 7:
    case 8:
    case 9:
        std::cout << "Fall" << std::endl;
        break;
    case 10:
    case 11:
    case 12:
        std::cout << "Winter" << std::endl;
        break;
    default:
        std::cout << "Invalid month" << std::endl;
        break;
    }
}