// 1d array check for 0s in array and print the count ... user input and functiom
// find big and small element in the array
#include<iostream>
using namespace std;

int CountZero(int arr[], int n)
{
    int count = 0;
    for (int i = n - 1; i > -1; i--)
    {
        if (arr[i] == 0)
            count++;
    }
    return count;
}

int main()
{
    int size;
    cout << "Enter the size of the array : ";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "arr[" << i << "] : ";  // Use i instead of i + 1 for correct indexing
        cin >> arr[i];
    }
    cout << "Number of zeros: " << CountZero(arr, size);

    return 0;
}
