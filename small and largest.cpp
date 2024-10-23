#include <iostream>
using namespace std;

int main() {
    int num, digit;
    int smallest = 9, largest = 0;

    cout << "Enter a number: ";
    cin >> num;

    while (num > 0) {
        digit = num % 10;  // Extract the last digit

        if (digit > largest) {
            largest = digit;
        }
        if (digit < smallest) {
            smallest = digit;
        }

        num = num / 10;  // Remove the last digit
    }

    cout << "Smallest digit: " << smallest << endl;
    cout << "Largest digit: " << largest << endl;

    return 0;
}

