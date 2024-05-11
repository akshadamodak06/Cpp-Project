#include<iostream>
int main()
{
    std::cout<<"Non const reference : "<<std::endl;
    int x {10};
    int &y {x};
    std::cout<<"Number : "<<x<<std::endl;
    std::cout<<"Reference Number : "<<y<<std::endl;
    std::cout<<"Changing the value "<<std::endl;
    y=20;
    std::cout<<"Number : "<<x<<std::endl;
    std::cout<<"Reference Number : "<<y<<std::endl;
    std::cout<<std::endl;     
    std::cout<<"Const Reference : "<<std::endl; 
    int x1 {100};
    const int &y1 {x1};  
    std::cout<<"Number : "<<x1<<std::endl;
    std::cout<<"Reference Number : "<<y1<<std::endl;
    std::cout<<"Changing the value of Number "<<std::endl;
    std::cout<<"Cannot change the value of reference number "<<std::endl;
    x1=200;
   //cannot do this  y1=300;
    std::cout<<"Number : "<<x1<<std::endl;
    std::cout<<"Reference Number : "<<y1<<std::endl;
    std::cout<<std::endl;     
    std::cout<<"Const Reference : "<<std::endl; 
    




}
