#include <iostream>

using namespace std;

int main() {
    int num;
    cout << "Enter the size of the array: ";
    cin >> num;

    int array[num];
    cout << "Enter " << num << " numbers: ";
    for (int i = 0; i < num; i++) {
        cin >> array[i]; 
    }
    
    int find;
    cout << "Enter a number to find: ";
    cin >> find;

    bool found = false; 
    for (int i = 0; i < num; i++) {
        if (array[i] == find) {
            cout << "Found at index: " << i << endl; 
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Not found: " << find << endl;
    }

    return 0;
}
