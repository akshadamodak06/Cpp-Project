#include<iostream>
void say_age(int &age);

int main()
{
    int age1 {23};
    std::cout<<"Age - before : "<<age1<<std::endl;
    say_age(age1);
    std::cout<<"Age - after : "<<age1<<std::endl;
    return 0;
}

void say_age(int &age)
{
    ++age;
    std::cout<<"Hello! You are "<<age<<" years  old."<<std::endl;
}
