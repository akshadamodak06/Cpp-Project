#include<iostream>
int main()
{
    char ch {'a'};
    char value=65;
    std::cout<< "Value: " << ch << std::endl;
    std::cout<<"Value: "<<static_cast<int>(ch)<<std::endl;
    std::cout<<"Value: "<<value<<std::endl;
    std::cout<<"Value(int) :"<<static_cast<int>(value) <<std::endl;
}
