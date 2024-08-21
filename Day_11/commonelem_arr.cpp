#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int s;
    bool ch = 1;
    cout << "enter the size of arrays : ";
    cin >> s;
    vector<int> a(s), b(s);
    cout << "Enter the elements of first array : \n";
    for (int i = 0; i < s; i++)
    {
        cin >> a[i];
    }
    cout << "Enter the elements of second array : \n";
    for (int i = 0; i < s; i++)
    {
        cin >> b[i];
    }
    cout << "Same elements in both are : \n";
    for (int i = 0; i < s; i++)
    {
        for (int j = 0; j < s; j++)
        {
            if (a[i] == b[j])
                cout << a[i] << endl;
        }
    }
    return 0;
}