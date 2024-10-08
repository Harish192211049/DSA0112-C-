#include <iostream>
using namespace std;

int main() {
    int n;
    
   
    cout << "Enter the position of the Fibonacci number you want (n >= 0): ";
    cin >> n;

    int fib;


    if (n == 0) {
        fib = 0;  
    } else if (n == 1) {
        fib = 1;  
    } else if (n == 2) {
        fib = 1;  
    } else {
        int a = 0; 
        int b = 1; 
        fib = 0;

        
        for (int i = 2; i <= n; i++) {
            fib = a + b;  
            a = b;        
            b = fib;      
        }
    }

  
    cout << "The " << n << "th Fibonacci number is: " << fib << endl;

    return 0;
}
