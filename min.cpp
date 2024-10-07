#include <iostream>
using namespace std;

int main() {
    
    int arr[] = {12, 4, 5, 6, 2}; 

    int minElement = arr[0]; 
    for (int i = 1; i < size; i++) {
        if (arr[i] < minElement) {
            minElement = arr[i]; 
        }
    }

    cout << "The smallest element in the array is: " << minElement << endl;

    return 0;
}

