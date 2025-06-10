#include <iostream>
using namespace std;

int main() {
    string name;
    bool valid = true;
    cin.ignore(); // Clear buffer
    cout << "\nEnter your name: ";
    getline(cin, name);

    for (char c : name) {
        if (!isalpha(c) && c != ' ') {
            valid = false;
            break;
        }
    }

    if (valid)
        cout << "Welcome, " << name << "!\n";
    else
        cout << "Invalid name. Only alphabets and spaces allowed.\n";

    return 0;
}
