#include <iostream>
#include <iomanip>

int main()
{
    float number1 {1.12345678901234567890};
    double number2 {1.12345678901234567890};
    long double number3 {1.12345678901234567890};
    float x=0;
    float y=10;

    std::cout<<std::setprecision(20);
    std::cout<<"First number: " <<number1<<std::endl;//precision 7 digits
    std::cout<<"Second number: " <<number2<<std::endl;//precision 15 digits
    std::cout<<"Third number: " <<number3<<std::endl;//precision 15+ digits
    std::cout<<"The number is :"<<(y/x)<<std::endl;
    std::cout<<"The number is :"<<(x/x);


    return 0;
}

