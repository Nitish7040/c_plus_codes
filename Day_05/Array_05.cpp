//extract odd even seperatly from array print the elements also if sum of arr in betwwen 30-50 print the sum , retun 0

#include <iostream>

using namespace std;

int main() {
    int arr[] = {12, 5, 7, 20, 3, 15}; // Example array
    int odd[6], even[6];  // Arrays to store odd and even numbers
    int oddCount = 0, evenCount = 0, sum = 0;

    // Extract odd and even elements and calculate the sum
    for (int i = 0; i < 6; i++) {
        sum += arr[i];
        if (arr[i] % 2 == 0) {
            even[evenCount++] = arr[i];
        } else {
            odd[oddCount++] = arr[i];
        }
    }

    // Print odd numbers
    cout << "Odd numbers: ";
    for (int i = 0; i < oddCount; i++) {
        cout << odd[i] << " ";
    }
    cout << endl;

    // Print even numbers
    cout << "Even numbers: ";
    for (int i = 0; i < evenCount; i++) {
        cout << even[i] << " ";
    }
    cout << endl;

    // Check if the sum is between 30 and 50
    if (sum >= 30 && sum <= 50) {
        cout << "Sum of array elements: " << sum << endl;
        return 0;
    }

    return 0;
}
