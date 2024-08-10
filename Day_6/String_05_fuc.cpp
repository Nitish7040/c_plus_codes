// reverse function

#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
int main(){
string ss;
getline(cin,ss);
cout<<ss<<endl;
reverse(ss.begin(), ss.end()); 
cout<<ss;


    return 0;

}