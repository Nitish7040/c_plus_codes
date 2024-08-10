#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cout << "Input String : ";
    cin >> str;
    char ch;
    cout << "Enter the alphabet for search : ";
    cin >> ch;

    int count = 0;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ch)
        {
            count++;
        }
    }
    cout << "Present " << count << " times in string " << str << endl;
    return 0;
}