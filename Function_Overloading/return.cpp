# include <iostream>
#include <string>
int sum(int a,int b)
{
    int result =a+b;
    std::cout<<"In function : &result : "<<&result<<std::endl;
    return result;
}

std::string add(std::string str1,std::string str2)
{
    std::string result=str1+str2;
    std::cout<<"In function : &result(std::string) : "<<&result<<std::endl;
    return result;

}

int main()
{
    int x{4},y{8};
    int result =sum(x,y);
    std::cout<<"Result : "<<result<<std::endl;
    std::cout<<"In main : &result : "<<&result<<std::endl;
    //both the address are different because return type makes copies in the main function.
    std::string s1 {"Hello"};
    std::string s2{"World!"};
    std::string result1 =add(s1,s2);
    std::cout<<"result : "<<result1<<std::endl;
     std::cout<<"In main : &result : "<<&result1<<std::endl;
    //both the address are same .
    //This is done by compiler.
    //normally the compiler makes copies and thus they have different address
    //However if the compiler can optimize a solution it does not make copies
    
    return 0;
}
