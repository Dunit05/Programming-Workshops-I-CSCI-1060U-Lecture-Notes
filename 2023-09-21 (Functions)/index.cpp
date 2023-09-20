#include <cmath>
#include <ctime>
#include <iostream>

// c++ functions
// int functionName(int parameter1, char parameter2) {
//     /*code in body of function*/
//     return 0;
// }

// Write a program that contains a function called helloWorlds(int myInteger), which prints “Hello World!” myInteger times.

int helloWorlds(int myInteger) {
    for (int i = 0; i < myInteger; i++) {
        std::cout << "Hello World!" << std::endl;
    }
    return 0;
}

// Using the cmath library, write a program that shows whether or not the sqrt() function behaves differently with integers and floats. Then, figure out what the pow(base, exp)
// function does, then make your own function to do the same thing.

int check() {
    int myInt = 4;
    float myFloat = 4.0;
    std::cout << sqrt(myInt) << std::endl;
    std::cout << sqrt(myFloat) << std::endl;
    std::cout << pow(myInt, 2) << std::endl;
    std::cout << pow(myFloat, 2) << std::endl;
    return 0;
}

// Using ctime and iostream, write a program that prompts the user for a number, then generates and prints that many random numbers between 1000 and 2000.
// You will need to use : srand()[random initializer] time(NULL)[srand parameter] rand() % X[random generator]

int random() {
    int myInt;
    std::cout << "Enter a number: ";
    std::cin >> myInt;
    srand(time(NULL));
    for (int i = 0; i < myInt; i++) {
        std::cout << rand() % 1000 + 1000 << std::endl;
    }
    return 0;
}

// Go back to your first program, and overload the helloWorlds function to print a different greeting if the function is given an integer and two initials (char variables).

int helloWorld(char myChar1, char myChar2) {
    std::cout << "Hello " << myChar1 << myChar2 << "!" << std::endl;
    return 0;
}

int main() {
    helloWorlds(5);
    check();
    random();
    helloWorld('A', 'B');
    return 0;
}