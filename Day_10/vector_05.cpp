#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int s;
    cout << "Enter how many numbers you want to enter : ";
    cin >> s;
    vector<int> n(s);
    cout << "Enter the elements : " << endl;
    for (int i = 0; i < s; i++)
    {
        cin >> n[i];
    }
    sort(n.begin(), n.end());

    for (int i = 0; i < n.size() - 1; i++)
    {
        if (n[i] == n[i + 1])
        {
            n.erase(n.begin() + i + 1);
            i--; // updation for repetition
        }
    }
    cout << "The Final array: \n";
    for (int i = 0; i<n.size(); i++)
    {
        cout << n[i] << "\t";
    }
    cout << endl;
    return 0;
}