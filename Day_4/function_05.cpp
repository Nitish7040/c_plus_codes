#include <iostream>
using namespace std;

void lemon_case(int n)
{
    if(n<=0){
        cout << "God 1 : needed 7 " << endl;
        cout << "God 2 : needed 7 " << endl;
        cout << "God 3 : needed 7 " << endl;
        cout << "required : 21" << endl;
        return;
    }
    int required_lemon = 21;
    if (n == required_lemon)
    {
        cout << "God 1 : offered 7 " << endl;
        cout << "God 2 : offered 7 " << endl;
        cout << "God 3 : offered 7 " << endl;
        cout << "sufficient" << endl;
    }
    else if (n > required_lemon)
    {
        cout << "God 1 : offered 7 " << endl;
        cout << "God 2 : offered 7 " << endl;
        cout << "God 3 : offered 7 " << endl;
        cout << "surplus : " << (n - required_lemon) << endl;
    }
    else
    {
        int count = n/7;
        int remaining = n%7;
        int i = 1;
        while (i <= count)
        {
            cout << "God " << i << " offered : 7 " << endl;
            i++;
        }
        cout<<"God "<<i<<" offered : "<<remaining<< " needed : "<<(7-remaining)<<endl;
        for (int j = i+1; j <= 3; j++)
        {
            cout << "God " << j << " need : 7" << endl;
        }
        cout << "shortage" << endl;
        cout << "required : " << (required_lemon - n) << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    lemon_case(n);
}