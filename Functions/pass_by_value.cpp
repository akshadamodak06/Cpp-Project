#include <iostream>
void say_age(int age);

int main()
{
    int age {23};
    std::cout<<"Age - before : "<<age<<std::endl;
    say_age(age);
    std::cout<<"Age - after : "<<age<<std::endl;
    return 0;
}

void say_age(int age)
{
    ++age;
    std::cout<<"Hello! You are "<<age<<" years  old."<<std::endl;
}
