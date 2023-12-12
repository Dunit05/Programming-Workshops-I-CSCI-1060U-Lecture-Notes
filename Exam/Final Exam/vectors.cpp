#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v(3);
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    for (int i : v) {
        cout << i << endl;
    }

    // Corrected: Use iterator to erase an element at a specific position
    v.erase(v.begin() + 1); // Erase the element at index 1

    cout << "After erasing element at index 1:" << endl;

    for (int i : v) {
        cout << i << endl;
    }

    return 0;
}
