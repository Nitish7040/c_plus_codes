//Get three float as input find thier product

#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

int main() 
{
  float num1;
  float num2;
  float num3;
  
  std::cout<<"Enter a number1: "<<endl;
  std::cin>>num1;
  std::cout<<"Enter a number2: "<<endl;
  std::cin>>num2;
  std::cout<<"Enter a number3: "<<endl;
  std::cin>>num3;
  std::cout<<"Your product: "<<num1*num2*num3;
  
    return 0;
}