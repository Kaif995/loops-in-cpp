#include <iostream>
using namespace std;

int main() {
    int N, i = 1;  

    cout << "Enter a number: ";
    cin >> N;

    // While loop to print numbers from 1 to N
    while (i <= N) {
        cout << i << " ";
        i++;  
    }

    return 0;
}
