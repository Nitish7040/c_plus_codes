#include<iostream>
using namespace std;
int main(){

int n=100;
cout<<&n<<endl;
int *ptr;
ptr=&n; //refrecing
cout<<ptr<<endl;
cout<< *ptr; // derefrence

    return 0;
}