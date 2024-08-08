// cal total and avg also print "great work" if the avg is above 80 and rest print "good work" :-

#include<iostream>
using namespace std;
int main() {

int n1,n2,n3,n4,n5;
int total;
int avg;

cout<<"Enter the 5 students marks :- "<<endl;
cin>>n1>>n2>>n3>>n4>>n5;

total= n1+n2+n3+n4+n5;
cout<<"Total marks ="<<total<<endl;

avg=total/5;
cout<<"Average = "<<avg<<endl;

if (avg>=80)
{
    cout<<"Great Work";
}else
{
    cout<<"Good work";
}
    return 0;
}
