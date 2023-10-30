// Write a program that prompts the user to enter a sentence and appends the sentence to an existing file named "data.txt". Open the file in append mode and use the appropriate file stream operations to append the user's input to the file. Ensure that the file is properly closed after appending.

#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string sentence;
    ofstream outputFile;

    outputFile.open("data.txt", ios::app);

    cout << "Enter a sentence: ";
    getline(cin, sentence);

    outputFile << sentence;

    outputFile.close();

    return 0;
}