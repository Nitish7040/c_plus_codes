// take input a no. and check the no. is +ve or -ve or even or odd:-

#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter a number: " << endl;
    cin >> n;

    // Check if the number is positive or negative
    if (n >= 0) {
        cout << "The number is positive." << endl;
    } else {
        cout << "The number is negative." << endl;
    }
    // Check if the number is even or odd
    if (n % 2 == 0) {
        cout << "The number is even." << endl;
    } else {
        cout << "The number is odd." << endl;
    }

    return 0;
}
