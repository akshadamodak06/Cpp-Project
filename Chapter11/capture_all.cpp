#include<iostream>
int main()
{
    int c{42};

    std::cout<<"Capturing everything by value : "<<std::endl;
    // the '=' in the bracket permits every variable in the code to be accessed inside the lambda fnction
    auto func = [=]()
    {
        std::cout<<"Inner Value : "<<c<<std::endl;
    };

    for(int i=0;i<5;i++)
    {
        std::cout<<"Outer value : "<<c<<std::endl;
        func();
        ++c;
    }

    std::cout<<"Capturing everything by reference : "<<std::endl;

    auto func1 = [&]()
    {
        std::cout<<"Inner value : "<<c<<std::endl;
    };
    for(int  i=0;i<5 ;i++)
    {
        std::cout<<"Outer Value : "<<c<<std::endl;
        func1();
        ++c;
    }

     


}
