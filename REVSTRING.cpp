#include <iostream>
using namespace std;

int main() {
    string input;

    cout << "Enter a string: ";
    getline(cin, input); // Read the entire line

    string reversed; // To store the reversed string

    // Reverse the string using a loop
    for (int i = input.length() - 1; i >= 0; i--) {
        reversed += input[i]; // Append characters in reverse order
    }

    cout << "Reversed string: " << reversed << endl;

    return 0;
}

