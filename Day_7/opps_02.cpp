// 
#include<iostream>
#include<string>
using namespace std;
class bird{
     public:
        string name;
        int speed_per_hour =30;
        void totalfly_time(int hour){
            int total = speed_per_hour*hour;
            cout<<total;
        }

};
int main(){
            bird obj;
            obj.totalfly_time(5);

    return 0;
};
