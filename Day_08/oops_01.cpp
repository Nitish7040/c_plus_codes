#include<iostream>
using namespace std;


class add{
    public:
    int n1=10;
    int n2=20;
};
class multi:public add{
    public:
    int n3=30;
    int multi =(n1+n2)*n3 ;
};

int main(){
    multi obj;
    cout<<obj.n1<<endl;
    cout<<obj.n2<<endl;
    cout<<obj.n3<<endl;
    cout<<obj.multi<<endl;
return 0;
}