#include<iostream>
using namespace std;

// make the function
int  display(){

int n=100;
if (n<50)
{
return 1;
}
else{
    return 0;
}

}
int main(){

   // calls the function
  int res= display();
  cout<<res;
    return 0;
}