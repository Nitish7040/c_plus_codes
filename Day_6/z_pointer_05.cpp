#include <iostream>
using namespace std;

void swap(int &x,int &y){
    int temp=x;
    x=y;
    y=temp;
}

int main(){
    int x=1,y=2;
    cout<<"before:"<<"x="<<x<<"  y="<<y<<endl;
    swap(x,y);
    // cout<<"after swapping:<<"x="<<x<<"y="<<y<<endl;
    cout<<"after swapping:"<<"x="<<x<<"  y="<<y<<endl;
    return 0;
}
