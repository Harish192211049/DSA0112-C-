#include <iostream>
using namespace std;

int factorial(int n) {
    return (n == 0) ? 1 : n * factorial(n - 1);
}

bool isStrong(int num) {
    int sum = 0, original = num;
    while (num > 0) {
        sum += factorial(num % 10);
        num /= 10;
    }
    return sum == original;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (isStrong(num)) {
        cout << num << " is a Strong number." << endl;
    } else {
        cout << num << " is not a Strong number." << endl;
    }
    return 0;
}