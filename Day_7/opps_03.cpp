// parrot and egale speed :-----


#include<iostream>
#include<string>
using namespace std;

class bird{
    public:
    string name;
    int speed,hours,total,total_p,total_e;
    void total_time_eagle(int speed,int hours){
        total_e =speed*hours;
        cout<<"Eagle flew "<<total_e<<" KM in "<<hours<<" hours"<<endl;
    }
    void totalfly_time_parrot(int speed , int hours){
        total_p=speed*hours;
        cout<<"parrot flew  "<<total_p<<" KM in "<<hours<<" hours"<<endl;
    }

};

int main(){
        bird obj;
        obj.name="Eagle";
        obj.name="Parrot";
        obj.total_time_eagle(50,10);
        obj.totalfly_time_parrot(10,10);



    return 0;
}