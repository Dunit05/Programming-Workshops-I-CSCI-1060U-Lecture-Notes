// Given a string representation of a floating-point number, write a function to convert this string to its corresponding float value without using any standard conversion functions. You can assume the input string is always a valid float.

#include <iostream>
#include <string>
using namespace std;

float stringToFloat(string str) {
    float result = 0;
    int decimalIndex = str.find('.');

    for (int i = 0; i < str.length(); i++) {
        if (i == decimalIndex) {
            continue;
        }

        result *= 10;
        result += str[i] - '0';
    }

    int decimalPlaces = str.length() - decimalIndex - 1;

    for (int i = 0; i < decimalPlaces; i++) {
        result /= 10;
    }

    return result;
}

int main() {
    string str = "123.456";
    cout << stringToFloat(str);

    return 0;
}