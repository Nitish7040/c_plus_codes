#include<iostream>
#include<string>
using namespace std;

class animal{
      public:
      //attribut//behaviours
      string name ="Cat";
      int age =1;
      void sound(){
        cout<<"inside method"<<endl;
        cout<<name<<endl;
        cout<<age<<endl;

        cout<<"Meow";
      }
};

int main(){
      
      animal obj;
      obj.sound();
      cout<<" from main"<<endl;

    return 0;
}