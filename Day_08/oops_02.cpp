#include <iostream>
#include <string>

using namespace std;

string rotateStringBy2(string str) {
    int n = str.length();
    if (n <= 2) {
        return str;  // If the string length is 2 or less, rotation doesn't change the string
    }

    string rotated = str.substr(2) + str.substr(0, 2);
    return rotated;
}

int main() {
    string str = "abcdef";
    string rotatedStr = rotateStringBy2(str);
    cout << "Original string: " << str << endl;
    cout << "String after rotating by 2: " << rotatedStr << endl;

    return 0;
}
