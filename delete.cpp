#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5, pos = 2;

    for (int i = pos; i < n - 1; i++)
        arr[i] = arr[i + 1];
    n--;

    cout << "Array after deletion: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
