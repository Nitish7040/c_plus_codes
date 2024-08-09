// create 1d array using user input
#include <iostream>
using namespace std;
int main (){
// dynamic array___________________________
int size;
cout<<"enter the size of array"<<endl;
cin>>size;

int arr[size];
for(int i=0; i<size;i++){
    cout<<"enter the element "<<i+1<<endl;
    cin>>arr[i];
}

for(int i=0; i<size;i++){
    cout<<arr[i]<<" ";
}
    return 0;
}