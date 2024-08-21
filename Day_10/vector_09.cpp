#include <iostream>
using namespace std;

int main()
{
    int n, k;
    int count = 0;
    cin >> n;
    cin >> k;
    if (k == 1)
    {
        cout << n << endl;
    }
    else
    {
        for (int i = 1; i <= k; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (j % i == 0)
                    count++;
            }
        }
        cout << count;
    }
    return 0;
}