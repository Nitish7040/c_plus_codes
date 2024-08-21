#include <iostream>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;

int main(){
    set<int>s;
    s.insert(10);
    s.insert(100);
    s.insert(110);
    s.insert(109);
    for(auto i:s){
        cout<<i<<" ";
    }
    cout<<endl;
    int flag=0;
    for(int i:s){
        if(s.find(100)!=s.end()){
            flag=1;
            break;
        }
    
    if(flag==1){
        cout<<"element found!";
    }
    else{
        cout<<"not found!";
    }
    return 0;
}
}