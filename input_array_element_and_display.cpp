#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter your number: ";
    cin >> num;

int array[num];
    for (int i = 0; i < num; i++) {
        cin>>array[i]; 
    }


    cout << "You entered: ";
    for (int i = 0; i < num; i++) {
        cout << array[i] << " ";
    }
    cout << endl; 
    return 0;
}

