#include<iostream>
using namespace std;

class car1{
    public:
    int x=10;
    void p1(){
        cout<<"hello Mr x";
        cout<<x;

    }
};
class car2{
    public:
    int y=20;
    car1 obj1;
         void pq(){
            cout<<"hello mr y";
            cout<<y;
            cout<<obj1.x;

         }
};
int main(){
    car1 obj1;
    obj1.p1();

}
/// some codes remaning