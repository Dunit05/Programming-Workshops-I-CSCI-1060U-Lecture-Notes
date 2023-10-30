// Write a program that prompts the user to enter a sentence and writes the sentence to a file named "output.txt". Open the file in write mode and use the appropriate file stream operations to write the user's input to the file. Ensure that the file is properly closed after writing.

#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string sentence;
    ofstream outputFile;

    cout << "Enter a sentence: ";
    getline(cin, sentence);

    outputFile.open("output.txt");

    outputFile << sentence;

    outputFile.close();

    return 0;
}