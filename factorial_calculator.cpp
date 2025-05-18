#include <iostream>
using namespace std;

int main() {
    double factorial = 1.0;
    int n;

    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        factorial *= i;  
    }

    cout << "Factorial of " << n << " is: " << factorial << endl;

    return 0;
}
