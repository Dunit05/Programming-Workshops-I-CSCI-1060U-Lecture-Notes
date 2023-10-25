#include <fstream>
#include <iostream>
using namespace std;

int main() {
    ofstream file;
    file.open("Lecture6b.txt");
    int num;
    for (int i = 0; i < 5; i++) {
        cout << "Enter a number: ";
        cin >> num;
        file << num << endl;
    }
    file.close();
    readMyFile();
    return 0;
}

void readMyFile() {
    ifstream myInput;
    myInput.open("Lecture6b.txt");

    string word;
    while (getline(myInput, word)) {
        cout << word << endl;
    }

    file.close();
}