#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    
    cout << "Enter a positive integer: ";
    cin >> n;

  
    for (int i = 1; i <= n / 2; ++i) {
        sum += (n % i == 0) * i; 
    }

    
    cout << n << " is " << ((sum == n) * "a perfect number." + (sum != n) * "not a perfect number.") << endl;

    return 0;
}

