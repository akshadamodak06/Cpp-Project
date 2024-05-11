#include <iostream>
int main()
{
    int number1 {15};
    int number2 = 017;//recognises the number as octal and stores it as integer  
    int number3 =0x0f;//recognises the number as hexadecimal and stores it as integer 
    int number4= 0b00001111;//recognises the number as binary and stores it as integer

    std::cout<<"Then number is "<<number1<<std::endl;
    std::cout<<"Then number is "<<number2<<std::endl;
    std::cout<<"Then number is "<<number3<<std::endl;
    std::cout<<"Then number is "<<number4<<std::endl;

    return 0;
}
