#include<iostream>
using namespace std;

class Node {
    public:
    // Declaration 
    int data;
    Node *next;
    // Initialisation
    Node() {
        data = 0;
        next = NULL;
    }
    //
    Node(int data) {
        this->data=data;
        this->next = NULL;
    }
};

class Linkedlist{
    public :
    Node *head;
    Linkedlist(){
        head = NULL;
    }
    void insert(int data);
    void display();
};

void Linkedlist::insert(int data){
        Node *newnode = new Node(data);
        Node* temp = head;
        if(head == NULL)
        return;
        while(temp->next != NULL) {
            temp = temp->next;
        }
        temp ->next = newnode;
}

void Linkedlist::display(){
    Node* temp = head;
    if(head == NULL) {
        cout << "List is empty" << endl;
        return;
    }
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp ->next;
    }
}

int main() {

    return 0;
}