#include <cmath>
#include <iostream>

// Write an overloaded function named "calculateRectangleArea" that calculates the area of a rectangle. The function should accept two parameters: width and height. Implement the function for both integer and float data types. The function should return the calculated area.

int calculateRectangleArea(int width, int height) {
    return width * height;
}

float calculateRectangleArea(float width, float height) {
    return width * height;
}

int main() {
    std::cout << calculateRectangleArea(5, 5) << std::endl;
    std::cout << calculateRectangleArea(5.0f, 5.0f) << std::endl;
    return 0;
}