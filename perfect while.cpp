#include <iostream>
using namespace std;

// Recursive function to calculate the sum of divisors
int sumOfDivisors(int n, int i) {
    // Base case: if i exceeds n/2, return 0
    if (i > n / 2) {
        return 0;
    }
    // If i is a divisor, add it to the sum
    return (n % i == 0 ? i : 0) + sumOfDivisors(n, i + 1);
}

int main() {
    int n;

    // Ask the user for input
    cout << "Enter a positive integer: ";
    cin >> n;

    // Calculate the sum of proper divisors
    int sum = sumOfDivisors(n, 1);

    // Check if 'n' is a perfect number using an if statement
    if (sum == n) {
        cout << n << " is a perfect number." << endl;
    } else {
        cout << n << " is not a perfect number." << endl;
    }

    return 0;
}

