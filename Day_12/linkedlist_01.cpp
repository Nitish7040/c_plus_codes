/*
insert at end logic

if this is more than two nodes need to traverse using a pointer called 'temp' till last node then 
temp.next=newnode
*/


#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(){
        data=0;
        next=NULL;
    }

node (int data){
    this->data=data;
    this->next=NULL;

}
};
int main(){
    return 0;
}