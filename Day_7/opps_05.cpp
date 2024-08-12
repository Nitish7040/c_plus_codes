//vending machine problem

#include <iostream>
using namespace std;

int main()
{
    int ic = 10;
    int n, i = 1;
    cout << "Enter the no of fruti you want : ";
    cin >> n;
    int on = n;

    if (on == ic)
    {
        while (n != 0)
        {
            cout << "Take your fruti " << i << endl;
            n--;
            i++;
        }
        cout << "Enjoy your Drinks :)" << endl;
    }

    else if (on == 0)
        cout << "Thanks for Approaching" << endl;

    else if (on > 0 && on < ic)
    {
        while (n != 0)
        {
            cout << "Take your fruti " << i << endl;
            n--;
            i++;
        }
        cout << "Enjoy your Drinks :)" << endl;
        cout << "Left with : " << ic - on << " fruti";
    }

    else if (on > 0 && on > ic)
    {
        i = 1;
        int oic = ic;
        while (ic != 0)
        {
            cout << "Take your fruti " << i << endl;
            ic--;
            i++;
        }
        cout << "Enjoy your Drinks :)" << endl;
        cout << "Out of stock : " << on - oic;
    }

    else if (on < 0)
    {
        cout << "INVALID INPUT !!!" << endl;
        cout << "Enter Again :" << endl;
        main();
    }

    return 0;
}