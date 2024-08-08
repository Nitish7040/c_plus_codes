#include<iostream>
using namespace std;
int main(){
char c;
cout<<"enter the first character of color :"<<endl;
cin>>c;
switch(c){
    case 'v':
    case 'V':
    cout<<"violet color";
    break;

 case 'I':
    case 'i':
    cout<<"Indigo color";
    break;

 case 'B':
    case 'b':
    cout<<"Blue color";
    break;

 case 'G':
    case 'g':
    cout<<"Green  color";
    break;

 case 'Y':
    case 'y':
    cout<<"yellow color";
    break;

 case 'o':
    case 'O':
    cout<<"orange color";
    break;

 case 'R':
    case 'r':
    cout<<"Red color";
    break;
    default:
    cout<<"not a rainbow color";

}



    return 0;
}