#include <iostream>
using namespace std;

int main() {
    int x, y;
    cout << "Enter two integers: ";
    cin >> x >> y;

    if (x == y)
        cout << "The numbers are equal." << endl;
    else
        cout << "The numbers are not equal." << endl;

    return 0;
}
