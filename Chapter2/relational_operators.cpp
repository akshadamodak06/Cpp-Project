#include <iostream>
int main()
{
    int number1 {20};
    int number2 {45};
    std::cout<<"number1 : "<<number1<<std::endl;
    std::cout<<"number2 : "<<number2<<std::endl;
    std::cout<<std::endl;
    std::cout<<"number1<number2 : "<<(number1<number2)<<std::endl;
    std::cout<<"number1<=number2 : "<<(number1<=number2)<<std::endl;
    std::cout<<"number1>number2 : "<<(number1>number2)<<std::endl;
    std::cout<<"number1>=number2 : "<<(number1>=number2)<<std::endl;
    std::cout<<"number1==number2 : "<<(number1==number2)<<std::endl;
    std::cout<<"number1!=number2 : "<<(number1!=number2)<<std::endl;
    std::cout<<std::boolalpha;
    std::cout<<std::endl;
    std::cout<<"number1<number2 : "<<(number1<number2)<<std::endl;
    std::cout<<"number1<=number2 : "<<(number1<=number2)<<std::endl;
    std::cout<<"number1>number2 : "<<(number1>number2)<<std::endl;
    std::cout<<"number1>=number2 : "<<(number1>=number2)<<std::endl;
    std::cout<<"number1==number2 : "<<(number1==number2)<<std::endl;
    std::cout<<"number1!=number2 : "<<(number1!=number2)<<std::endl;

    bool result=(number1==number2);
    std::cout<<number1<<"=="<<number2<<" : "<< result;
    return 0; 
}
