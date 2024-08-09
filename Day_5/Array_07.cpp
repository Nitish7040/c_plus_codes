
// find out the leaders in the given array

#include<iostream>
using namespace std;

void leader(int arr[], int n) {
    int max = arr[n - 1];
    cout << max << " ";
    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] >= max) {
            max = arr[i];
            cout << max << " ";
        }
    }
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++) {
        cout << "arr[" << i << "] : ";
        cin >> arr[i];
    }

    cout << "Leaders in the array are: ";
    leader(arr, size);
    return 0;
}
