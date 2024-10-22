#include <iostream>
#include <cmath> // For pow() function
using namespace std;

int main() {
    double base;
    int exponent;

    cout << "Enter base: ";
    cin >> base;
    cout << "Enter exponent: ";
    cin >> exponent;

    double result = pow(base, exponent); // Calculate power
    cout << base << " raised to the power of " << exponent << " is: " << result << endl;

    return 0;
}

