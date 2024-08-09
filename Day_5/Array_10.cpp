#include<iostream>
using namespace std;
int main() {
int row,col;
cin>>row;
cin>>col;
int my_array[row][col];

for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        cin>> my_array[i][j];
    }
}

for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        cout<< my_array[i][j];
    }
}



    return 0;
}