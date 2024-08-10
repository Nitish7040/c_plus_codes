#include<iostream>
using namespace std;
int main(){

string fruit;
char c;
cout<<"enter the string"<<endl;
cin>>fruit;
cout<<"enter the character to check"<<endl;
cin>>c;

int count =0;
for(int i=0; i<6;i++)
if(c==fruit[i])
count=count+1;

if(count ==0){
cout<<"not present";
}
else{
    cout<<"present"<<count<<"times";
}


    return 0;
}