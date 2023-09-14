#include <iostream>

// Print Hello, World! to the console

int main()
{
    // Print any number
    printf("5");
    // Print a sentence in double quotes
    printf("Hello, World!");
    // Print any expression using 2 mathematical operators
    printf("5 + 5 = %d", 5 + 5);
    // Print an example of BEDMAS / PEMDAS
    printf("5 + 5 * 5 = %d", 5 + (5 * 5));
    // Print an expression that has an error
    // x = 5

    // Initialize 5 different types of variables with values other than the ones from the previous slides. Determine which variables you can add together, and which ones you cannot, by outputting different expressions
    int x = 5;
    float y = 5.5;
    double z = 5.5555555;
    char a = 'a';
    bool b = true;
    printf("%d", x + y);
    printf("%d", x + z);
    printf("%d", x + a);
    printf("%d", x + b);
    printf("%d", y + z);
    printf("%d", y + a);
    printf("%d", y + b);
    printf("%d", z + a);
    printf("%d", z + b);
    printf("%d", a + b);

    // Create 4 variables: two char, one int, and one double. Then write a printf statement that will print the following:
    // Hello! My initials are<char1>.<char2>, I am<int> years old, and my high school average was<double> %.
    char char1 = 'T';
    char char2 = 'D';
    int int1 = 18;
    double double1 = 99.9;
    printf("Hello! My initials are %c.%c, I am %d years old, and my high school average was %f%%.", char1, char2, int1, double1);

    // Write a cell that initializes a character then outputs the integer value of that character
    // Then write a cell that demonstrates the difference between integer division and floating point division in C++.
    char char3 = 'a';
    printf("%d", char3);
    printf("%d", 5 / 2);
    printf("%f", 5 / 2);
    printf("%f", 5.0 / 2.0);
    printf("%f", 5.0 / 2);
    printf("%f", 5 / 2.0);
    printf("%f", 5.0 / 2.0);
}