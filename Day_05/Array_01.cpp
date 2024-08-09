//check 1d arr acess character and string
// find sum of array elements
// extract odd even seperatly from array print the elements also if sum of arr in betwwen 30-50 print the sum , retun 0
// for odd elements mltiply by2 and print it


#include<iostream>
using namespace std;
int main(){
cout<<"extract the elements from array index :"<<endl;
int arr[]={100 ,200,300};
cout<<arr[0]<<endl;       // extract using array indexes
cout<<arr[1]<<endl;
cout<<arr[2]<<endl;

cout<<"extract the element usinf for loop "<<endl;
for(int i=0;i<3;i++){
    cout<<arr[i]<<endl;       // extract using for loop
}

cout<<"extract the elements using enhanced for loop"<<endl;
for(int j:arr){
    cout<<j<<endl;       // extract using enhanced for loop
}


    return 0;
}