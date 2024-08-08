#include<iostream>
using namespace std;

// make the function
void add(){
    int n1;
    int n2;
    int n3;
    int total;
cout<<"enter the three no. : "<<endl;
cin>>n1;
cin>>n2;
cin>>n3;
    total = n1+n2+n3;
    cout<<"Their sum = "<<total;
}
int main(){

   // calls the function
  add();
    return 0;
}