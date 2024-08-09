#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: "<<endl;
    cin >> a >> b;

    // Using the conditional operator to find the larger number
    int larger = (a > b) ? a : b;

    cout << "The larger number is: " << larger << endl;

    return 0;
}