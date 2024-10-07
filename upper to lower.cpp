#include<iostream>
using namespace std;

int main() {
    string str;
    cout << "Enter a string in uppercase: ";
    cin >> str;

    for(int i = 0; i < str.length(); i++) {
        str[i] = tolower(str[i]); 
    }

    cout << "Lowercase string: " << str;

    return 0;
}

