#include<iostream>
#include<string>
using namespace std;

int main() {
    string word1 = "abc";
    string word2 = "def";

    int l1 = word1.length();
    int l2 = word2.length();

    // Right notation: left to right
    cout << "Right notation :- " << endl;
    cout << word1[l1-1] + word1.substr(0, l1-1) << " " << word2[l2-1] + word2.substr(0, l2-1) << endl;

    // Left notation: right to left
    cout << "Left notation :- " << endl;
    cout << word1.substr(1, l1) + word1[0] << " " << word2.substr(1, l2) + word2[0] << endl;

    return 0;
}

