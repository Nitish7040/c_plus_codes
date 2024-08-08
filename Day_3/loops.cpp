#include<iostream>
using namespace std;
int  main() {

cout<<"print 1-5 with for loop:-"<<endl;
for(int i=1;i<=5;i++)
cout<< i<<endl;
cout<<" "<<endl;

cout<<"print 1-5 with while loop"<<endl;
int j=1;
while(j<=5){
cout<<j<<endl;
j++;
}

cout<<" "<<endl;

cout<<"print 1-5 with do while loop"<<endl;
int k=1;
do{
    cout<<k<<endl;
    k++;
}while(k<=5);


    return 0;
}