#include<iostream>
#include<string>
using namespace std;

int main(){

string s="nitish";
cout<<s.length()<<endl;
cout<<s.size()<<endl;
cout<<s.find('s')<<endl;
cout<<s.append(" is good boy")<<endl;
cout<<s.at(5)<<endl;
cout<<s.replace(0,2,"  Nitish_is_good_boy  ")<<endl;
cout<<endl;

//compare function :-----
// it gives diff of characters in terms of alphabetical order
// a=1 ,b=2
// b>a
string s1 ="nitish";
string s2="aditya";
cout<<s1.compare(s2) <<endl;

    return 0;
}