#include <iostream>

int main() {
    // Declare a variable "day" and assign it a value from 1 to 7, representing the days of the week. Use a switch statement to print the corresponding day name to the console. For example, if "day" is 1, print "Sunday."
    int day = 1;

    switch (day) {
    case 1:
        std::cout << "Sunday" << std::endl;
        break;
    case 2:
        std::cout << "Monday" << std::endl;
        break;
    case 3:
        std::cout << "Tuesday" << std::endl;
        break;
    case 4:
        std::cout << "Wednesday" << std::endl;
        break;
    case 5:
        std::cout << "Thursday" << std::endl;
        break;
    case 6:
        std::cout << "Friday" << std::endl;
        break;
    case 7:
        std::cout << "Saturday" << std::endl;
        break;
    default:
        std::cout << "Invalid day" << std::endl;
        break;
    }
}