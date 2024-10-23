#include <iostream>
using namespace std;

class FirstNumber {
public:
    int num1;
};


class SecondNumber {
public:
    int num2;
};


class Sum : public FirstNumber, public SecondNumber {
public:
    void calculate() {
        cout << "Sum: " << (num1 + num2) << endl;
    }
};

int main() {
    Sum Sumobj;
	cout<<"enter num1:";
	cin>>Sumobj.num1;
	cout<<"enter num2:";
	cin>>Sumobj.num2;
	Sumobj.calculate(); 

    return 0;
}
