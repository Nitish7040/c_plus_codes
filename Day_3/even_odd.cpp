#include <iostream>
using namespace std;
int main(){

int num;
int i=2;

cout<<"enter no. for even no "<<endl;
cin>>num;
cout<<"even no are"<<endl;

// while(i<=num){
//     cout<<i<<endl;
//     i=i+2;
// }

for(i;i<=num;i+=2)
cout<<i<<endl;

// for odd number
int n;
cout<<"enter the no. for odd no "<<endl;
cin>>n;
for(int i=1;i<=n;i+=2)
cout<<i<<endl;

return 0;
}