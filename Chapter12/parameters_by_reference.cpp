#include<iostream>

template<typename T>T maximum(T a,T b);
template<typename T>T maximum1(T &a,T &b);
int main()
{
    double a{23.5},b{78.65};
    std::cout<<"Out - &a: "<< &a<<std::endl;
    auto result=maximum(a,b);
    auto result1 = maximum1(a,b);
}
template<typename T>T maximum(T a,T b)
{
    std::cout<<"In - &a: "<<&a<<std::endl;
    return (a>b)?a:b;
}
//this suggests that the compiler makes a copy in the template function .
template<typename T>T maximum1(T &a,T &b)
{
    std::cout<<"In1 - &a: "<<&a<<std::endl;
    return (a>b)?a:b;
    
}

