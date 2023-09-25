#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>

// Write a function named "calculateCircleArea" that takes the radius of a circle as a parameter and returns the area of the circle. The function should return the calculated area.

double calculateCircleArea(double radius) {
    return M_PI * pow(radius, 2);
}

int main() {
    std::cout << calculateCircleArea(5) << std::endl;
    return 0;
}