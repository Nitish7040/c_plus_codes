// substr and length function used for right notation ...
#include<iostream>
#include<string>
using namespace std;
int main(){
string word = "abc";

int l = word.length();

//right notation :- left to right
cout<<"Right notation :- "<<endl;
cout<<word[l-1]+word.substr(0,l-1)<<endl;


// left notation :- right to left
cout<<"Left notation :- "<<endl;
cout<<word.substr(1,l)+word[0];
    return 0;
}

