#include<iostream>
#include<string>
using namespace std;
void product(int n1, int n2){
    cout<<n1*n2<<endl;
}
void product (int a,int b, int c){
    cout<<(a*b*c);
};

int main(){
    product(10 ,20);
    product(1,2,3);
    return 0;
}