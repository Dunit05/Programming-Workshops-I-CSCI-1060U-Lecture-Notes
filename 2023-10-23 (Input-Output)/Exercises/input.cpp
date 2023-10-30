// Write a program that reads the contents of a file named "input.txt" and displays them on the console. Open the file in read mode and use the appropriate file stream operations to read the file's contents. Display the contents on the console using cout. Ensure that the file is properly closed after reading.

#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string sentence;
    ifstream inputFile;

    inputFile.open("input.txt");

    getline(inputFile, sentence);

    cout << sentence;

    inputFile.close();

    return 0;
}