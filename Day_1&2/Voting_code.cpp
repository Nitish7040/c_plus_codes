//chek the person is eligible to voting or not :-


#include <iostream>
using namespace std;
int main() {
int age;
cout<<"enter your age"<<endl;
cin>>age;

if(age>=18){
    cout<<"Eligible for voting";
}else{
    cout<<"Not Eligible for voting";
}
    return 0;
}