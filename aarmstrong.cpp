#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, original, remainder, result = 0;
    cout << "Enter a number: ";
    cin >> num;

    original = num;
    int n = to_string(num).length();

    while (original != 0) {
        remainder = original % 10;
        result += pow(remainder, n);
        original /= 10;
    }

    if (result == num)
        cout << num << " is an Armstrong number." << endl;
    else
        cout << num << " is not an Armstrong number." << endl;

    return 0;
}
