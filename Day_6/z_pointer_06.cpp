#include<iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 5};
    int size = 5;

    int full[size] = {0};


    for(int i = 0; i < size - 1; i++) {
        full[arr[i] - 1] = 1;
    }

    for(int i = 0; i < size; i++) {
        if(full[i] == 0) {
            cout << "The missing number is: " << i + 1 << endl;
            break;
        }
    }

    return 0;
}
