#include <iostream>
int main()
{
    double a{10},b{20};
    auto func=[a,b]()
    {
        std::cout<<"a + b = "<<a+b<<std::endl;
    };
    func();

    int c{42};
    auto func1 =[c]()
    {
        std::cout<<"Inner Value : "<<c<<"  and Address : "<<&c<<std::endl;
    };
    for(int i=0;i<5;i++)
    {
        func1();
        std::cout<<"Outer Value : "<<c<<"  and Address : "<<&c<<std::endl;
        std::cout<<std::endl;
        ++c;
    }
//This happens because the c we write in the bracket is a copy created by the compiler 
     std::cout<<std::endl;;
     std::cout<<"Using reference variable in capture list."<<std::endl;
    auto func2 =[&c]()
    {
        std::cout<<"Inner Value : "<<c<<"  and Address : "<<&c<<std::endl;
    };
    for(int i=0;i<5;i++)
    {
        func2();
        std::cout<<"Outer Value : "<<c<<"  and Address : "<<&c<<std::endl;
        std::cout<<std::endl;
        ++c;
    } 
    return 0;
}
