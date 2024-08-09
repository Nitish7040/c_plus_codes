// find sum of array elements

#include <iostream>
#include <string>
using namespace std;

int Sum(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    int size;
    cout << "Enter the size of the array : ";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "arr[" << i + 1 << "] : ";
        cin >> arr[i];
    }
    cout << Sum(arr, size) << endl;
}