// Write a program that reads the contents of a file named "source.txt" and copies them to another file named "destination.txt". Open both files, the source file in read mode and the destination file in write mode. Use appropriate file stream operations to read the contents of the source file and write them to the destination file. Ensure that both files are properly closed after the copy process.

#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    ifstream inputFile;
    ofstream outputFile;
    string line;

    inputFile.open("source.txt");
    outputFile.open("destination.txt");

    while (getline(inputFile, line)) {
        outputFile << line << endl;
    }

    inputFile.close();
    outputFile.close();

    return 0;
}