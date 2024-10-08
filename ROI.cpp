#include <iostream>
using namespace std;

int main() {
    int p = 200000; // Principal amount
    int t = 3;     // Time period in years
    int age = 56;  // Age of the individual
    double r;      // Declare r outside the if-else blocks

    if (age >= 50) {
        cout << "Senior citizen" << endl;
        r = 10; // Set rate for senior citizen
    } else {
        cout << "Not a senior citizen" << endl;
        r = 12; // Set rate for non-senior citizen
    }    

    // Calculate ROI
    float ROI = (p * r * t) / 100;
    cout << "Return on Investment (ROI): " << ROI << endl; // Display the ROI

    return 0;
}
