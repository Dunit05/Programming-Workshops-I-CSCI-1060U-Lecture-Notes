// Write a program that reads the contents of a file named "text.txt" and counts the number of words in the file. Consider a word as a sequence of characters separated by whitespace. Open the file in read mode and use appropriate file stream operations to read the file's contents. Implement the word count logic and display the total number of words on the console.

#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    ifstream inputFile;
    string word;
    int wordCount = 0;

    inputFile.open("text.txt");

    while (inputFile >> word) {
        wordCount++;
    }

    cout << wordCount;

    inputFile.close();

    return 0;
}