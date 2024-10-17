#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, reversedStr = "";
    cout << "Enter a string: ";
    cin >> str;

    int i = str.length() - 1;
    while (i >= 0) {
        reversedStr += str[i];
        i--;
    }

    if (str == reversedStr)
        cout << str << " is a palindrome." << endl;
    else
        cout << str << " is not a palindrome." << endl;

    return 0;
}
