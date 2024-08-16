#include <iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v(10);
    for(int i=0;i<10;i++){
        cin>>v[i];
    }
    for(int i=0;i<10;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<10;i++){
        if(v[i]%12==0){
            cout<<v[i]<<" ";
        }
    }
}