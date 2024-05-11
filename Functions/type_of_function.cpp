#include<iostream>
//Function that takes a single parameter ,and desnt give back the result explicitly
void func1(int age);
void func1(int age)
{
    if((age>18))
    std::cout<<"You are an adult ."<<std::endl;
    else
    std::cout<<"Your are not an adult ."<<std::endl;
}
//Function that take multiple parameters and return the result of the computation
int func2(int a,int b)
{
    if(a>b)
    return a;
    else
    return b;

}
//Function that does not need parametrs and returns no value
void func3();
void func3()
{
    std::cout<<"Hello there "<<std::endl;
}
//Function that takes no parameters and returns a value
int func4();
int func4()
{
    int x;
    std::cout<<"Write your id number : ";
    std::cin>>x;
    return x;

}
int main()
{
    int x,y,z;
    std::cout<<"Write your age : ";
    std::cin>>x;
    func1(x);
    std::cout<<"Write other age : ";
    std::cin>>y;
    std::cout<< "The elder one has an age of :"<<func2(x,y)<<std::endl;
    func3();
    z=func4();
    std::cout<<"Your id number is : "<<z<<std::endl;

    

    return 0;
}
