#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> n{3, 4, 1, 6, 7};
    n.push_back(5);
    n.insert(n.end() - 3, 300);
    // cout << n.size() << endl
    //      << endl;
    for (int i : n)
    {
        cout << i << endl;
    }
    cout << endl;
    sort(n.begin(), n.end());
    reverse(n.begin(), n.end());
    n.erase(n.begin());
    for (int i : n)
    {
        cout << i << endl;
    }
    /* vector<double> nr{3.0, 4.0, 1.4, 6.4, 7.4};
     for (double j : nr)
     {
         cout << j << endl;
     }*/
    return 0;
}
