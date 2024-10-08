#include<iostream>
using namespace std;

int main() {
    int number, n;

 
    cout << "Enter a number: ";
    cin >> number;
    cout << "Enter the bit position to set (0-based index): ";
    cin >> n;
    if (n >= 0) {
       
        int mask = 1 << n;  
        number = number | mask;  
        cout << "The number after setting the " << n << "th bit is: " << number << endl;
    } else {
        cout << "Invalid bit position!" << endl;
    }

    return 0;
}
