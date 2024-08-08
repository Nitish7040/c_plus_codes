// Basic calculator with "cout"


#include <iostream>

int main() {
    // Write C++ code here
    int num1;
    int num2;
    
    std::cout<<"enter num1: ";
    std::cin>>num1;
    
    std::cout<<"enter num2: ";
    std::cin>>num2;
    std::cout<<" "<<std::endl;
    
    std::cout<<"addition= "<<num1+num2<<std::endl;
    std::cout<<"subtraction= "<<num1-num2<<std::endl;
    std::cout<<"multiplication= "<<num1*num2<<std::endl;
    std::cout<<"divide= "<<num1/num2;

    return 0;
}