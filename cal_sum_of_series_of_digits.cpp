#include <iostream>
using namespace std;

int main() {
    int num, sum = 0;

    cout << "Enter a number: ";
    cin >> num;
 
    do {
        sum += num % 10;  // Akhri digit nikal ke sum mein add karo! i.e.num=1234 then above line gives last element 4.
        num /= 10;        // Akhri digit hatao! i.e.num=1234 then above line gives 123.4 because of integer data type we have 123 left.
    } while (num > 0);

    cout << "Sum of digits: " << sum << endl;
    return 0;
}