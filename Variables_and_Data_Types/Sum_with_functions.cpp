#include<iostream>
int addNumbers(int x,int y);
int main()
{
    int a,b;
    int sum;
    std::cout<<"Enter the First Number: ";
    std::cin>>a;
    std::cout<<"Enter the Second Number: ";
    std::cin>>b;
    sum=addNumbers(a,b);
    std::cout<<"The sum is: "<<sum<<std::endl;
    sum=addNumbers(12,8);
    std::cout<<"The sum is also: "<<sum<<std::endl;
    std::cout<<"The sum is now: "<<addNumbers(22,18)<<std::endl;
    return 0;
}

int addNumbers(int x,int y)
{
    int sum;
    sum=x+y;
    return sum;
}
