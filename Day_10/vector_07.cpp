#include<iostream>
#include<vector>
#include<set>
using namespace std;
int main(){

set<int> s{1,2,3,1,2};
for(int i:s)
cout<<i<<endl;

    return 0;
}