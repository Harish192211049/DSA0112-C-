#include <iostream>
using namespace std;

int main() {
    int n, num, sumEven = 0, sumOdd = 0;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter " << n << " numbers:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> num;
        if (num % 2 == 0) {
            sumEven += num;  // Add to even sum
        } else {
            sumOdd += num;   // Add to odd sum
        }
    }

    cout << "Sum of even numbers: " << sumEven << endl;
    cout << "Sum of odd numbers: " << sumOdd << endl;

    return 0;
}

