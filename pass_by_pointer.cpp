#include <iostream>
void say_age(int *ptr);
int main()
{
    int age {23};
    std::cout<<"Age - before : "<<age<<std::endl;
    say_age(&age);
    std::cout<<"Age - after : "<<age<<std::endl;
    return 0;

}

void say_age(int *ptr)
{
    *ptr=*ptr+1;
    std::cout<<"Hello! You are "<<*ptr<<" years  old."<<std::endl;
}
