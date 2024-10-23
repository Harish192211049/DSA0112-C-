#include <iostream>
using namespace std;

class fnum {
public:
    int num1;
};


class snum {
public:
    int num2;
};


class Sum : public fnum, public snum {
public:
    void calculate() {
        cout << "Sum: " << (num1 + num2) << endl;
    }
};

int main() {
    Sum sumObj;
    
    cout << "Enter first number: ";
    cin >> sumObj.num1; 

    cout << "Enter second number: ";
    cin >> sumObj.num2;

    sumObj.calculate(); 

    return 0;
}
