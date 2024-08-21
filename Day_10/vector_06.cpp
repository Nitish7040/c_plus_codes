#include<iostream>
#include<vector>
using namespace std;
int main() {

vector<int>arr;
arr={10,20,30};
vector<int>::iterator itr=arr.begin();
cout<<*itr<<endl;
itr=arr.end()-1;
cout<<*itr<<endl;

    return 0;
}
