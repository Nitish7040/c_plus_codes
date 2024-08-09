//check 1d arr acess character and string

#include<iostream>
#include<string>
using namespace std;
int main(){

char arr1[]={'a','b','c'};
string arr2[]={"nitish","vicky"};

for(int i=0; i<3;i++){
    cout<<arr1[i]<<endl;
}

for(int j=0;j<2;j++){
cout<<arr2[j]<<endl;
}

return 0;
}