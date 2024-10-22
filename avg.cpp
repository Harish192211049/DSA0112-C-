#include <iostream>
using namespace std;

int main() {
    int n;
    double sum = 0.0;

    cout << "Enter the number of elements: ";
    cin >> n;

    // Check for valid number of elements
    if (n <= 0) {
        cout << "Please enter a positive number." << endl;
        return 1;
    }

    double number;

    // Get n numbers from the user
    for (int i = 1; i <= n; i++) {
        cout << "Enter number " << i << ": ";
        cin >> number;
        sum += number; // Add the number to the sum
    }

    // Calculate the average
    double average = sum / n;

    cout << "The average is: " << average << endl;

    return 0;
}

