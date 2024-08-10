#include<iostream>
using namespace std;

int main(){

int n=100;
int *ptr;
ptr=&n;
*ptr=200;
cout<<n;

    return 0;
}

