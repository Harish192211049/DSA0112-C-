#include <iostream>
using namespace std;

bool isHarshad(int num) {
    int sum = 0, original = num;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return (original % sum == 0);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (isHarshad(num)) {
        cout << num << " is a Harshad number." << endl;
    } else {
        cout << num << " is not a Harshad number." << endl;
    }
    return 0;
}
