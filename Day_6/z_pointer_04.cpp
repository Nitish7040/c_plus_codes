#include <iostream>
using namespace std;

int main(){
    int n1,n2,n3;
    cout<<"enter  three numbers:";
    cin>>n1>>n2>>n3;
    int *ptr1=&n1;
    int *ptr2=&n2;
    int *ptr3=&n3;
    cout<<"sum="<<(*ptr1+*ptr2+*ptr3)<<endl;
    cout<<&n1;
    return 0;
}