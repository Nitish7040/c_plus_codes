// calculate the area of incircle of the right angle triangle constructor in user input asked only two sides:-
//  
// radius = (a+b+c)/2

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int h, b, hy, op, r;
    cout << "Enter the choice : \n 1. Height & Hypotenious\n 2. Base & Hypotenious \n 3. Height and Base\n\n";
    cin >> op;

    switch (op)
    {
    case 1:
        cout << "Enter the Height and Hypotenious : ";
        cin >> h >> hy;
        b = sqrt(pow(hy, 2) - pow(h, 2));
        break;
    case 2:
        cout << "Enter the Base and Hypotenious : ";
        cin >> b >> hy;
        h = sqrt(pow(hy, 2) - pow(b, 2));
        break;
    case 3:
        cout << "Enter the Height and Base : ";
        cin >> h >> b;
        hy = sqrt(pow(h, 2) + pow(b, 2));
        break;

    default:
        cout << "Invalid Input !!!";
        break;
    }
    // cout << hy << h << b;
    r = (h + b - hy) / 2;
    float area;
    int sq = pow(r, 2);
    area = 3.14 * sq;
    cout << "Area of the Incircle of Right Angled Triangle : " << area;
}
