 //constructor program of oops concept .......
 
 #include<iostream>
using namespace std;

class reactangle{
 public:
 int length;
 int breadth;
 reactangle(int len,int brth):length(len), breadth(brth){}

 //function
 int getArea(){
    return length * breadth;
 }
};
int main(){
 reactangle rect (8,6);
 cout<<"area = "<<rect.getArea();


    return 0;
}