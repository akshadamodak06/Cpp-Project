#include <iostream>
#include <string>
//Function templates are blueprints.
//It is not a ral function declaraton or definition
//Real function declarations and definitions are seen when we actually call the template instances 
//if he template parameters have the same type(T,T),arguments must match
//They can have different data types
/* 
   template <typename T,typename U>
   T/U <functionname> <T a,U b> 
   {
    return a+b;
   }
*/

template<typename T>
T Amax(T a,T b)
{
    return ((a>b)?a:b);
}

int main()
{
    int x{5},y{1000};
    int result  = Amax(x,y);
    std::cout<<"Result : "<<result<<std::endl;
    double x1{3.14},y1{2.71};
    double result1 = Amax(x1,y1);
    std::cout<<"Result1 : "<<result1<<std::endl;
    std::string x2{"Wzllo"};
    std::string y2{"World"};
    std::string result2=Amax(x2,y2);
    std::cout<<"Result2 : "<<result2<<std::endl;

    //it gives an error when we put Amax(x,y)
    //when x is int and y is double 
    //as it can only replace it with one data type 


    return 0;
}

