#include <iostream>

int main() {
    // Declare two variables, "num1" and "num2," of type float and assign them values 7.5 and 2. Print the division of "num1" by "num2" to the console
    float num1 = 7.5;
    float num2 = 2;
    std::cout << num1 / num2 << std::endl;
    // printf("%f\n", num1 / num2);

    // Declare two variables, "num1" and "num2," of type int and assign them values 10 and 3, respectively.Perform an explicit typecast to divide "num1" by "num2" as floating - point numbers and store the result in a variable named "result." Print the value of "result" to the console.
    int num3 = 10;
    int num4 = 3;
    float result = (float)num3 / num4;
    std::cout << result << std::endl;
    // printf("%f\n", result);
}