#include<iostream>
using namespace std;

// make the function
void prime(){
    int n;
    cout<<"enter the number :"<<endl;
    cin>>n;
    int count=0;
    for (int i = 2; i <n; i++)
    {
        if (n%i==0)
        {
            count++;
        }  
    }
    if(count==0){
        cout<<"prime"<<endl;
    }
    else{
        cout<<"not a prime";
    }   
}
int main(){

   // calls the function
  prime();
    return 0;
}