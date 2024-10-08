#include<iostream>
using namespace std;

int main() {

    int arr[] = {1, 2, 2, 3, 3, 3, 4, 4, 4, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int freq[5] = {0};     
    for(int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }
    int mostFrequent = 0;
    for(int i = 0; i < 5; i++) {
        if(freq[i] > freq[mostFrequent]) {
            mostFrequent = i;
        }
    }
    cout << "Most frequent element: " << mostFrequent << endl;

    return 0;
}
