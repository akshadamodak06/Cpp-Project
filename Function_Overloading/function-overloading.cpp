#include <iostream>
//in function overload we basically keep the function name same and the compiler chooses the function then on the basis of the typ
int max(int a,int b)
{
    std::cout<<"int overload called"<<std::endl;
    return (a>b)?a:b;
}

/*
// Cant overload on the return type .
//Compiler error 
//double max(int a,int b)

by only changing the return type we cannot differ in functions 
//we can differ them by change in return type of parameters 
//parameters can be differed by order , number and types 
*/
double max(double a,double b)
{
    std::cout<<"double overload called"<<std::endl;
    return (a>b)?a:b;
}
std::string max(std::string a,std::string b)
{
    std::cout<<"string overload called"<<std::endl;
    return (a>b)?a:b;
}


int main()
{
    int x{10},y{20};
    double x1{47.2},y1{55.01};
    std::string x2 {"Hello"},y2{"World!"};

    std::cout<<"max ("<<x<<","<<y<<") : "<<max(x,y)<<std::endl;
    std::cout<<"max ("<<5<<","<<7<<") : "<<max(5,7)<<std::endl;
    std::cout<<"max ("<<x1<<","<<y1<<") : "<<max(x1,y1)<<std::endl;
    std::cout<<"max ("<<x2<<","<<y2<<") : "<<max(x2,y2)<<std::endl;
    std::cout<<"max ("<<"jaguar"<<","<<"puma"<<") : "<<max("jaguar","puma")<<std::endl;
}
