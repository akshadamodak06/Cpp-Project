#include <iostream>
//The full function definition coming in front of main() also doublies as a prototype(declaration).
//in function declarations it does not  
double func(double a,double b)
{
    //parameterspassed this way are scoped locally in the function
    //changes to them are not visible outside the function.What we
    //have inside the function are actually copies of the arguments
    //passed to the function

    std::cout<<"Inside function,before increment : "<<std::endl;
    std::cout<<"a : "<<a<<std::endl;
    std::cout<<"b : "<<b<<std::endl;

    double result = ((++a)*(++b));

    std::cout<<"Inside function,after increment : "<<std::endl;
    std::cout<<"a : "<<a<<std::endl;
    std::cout<<"b : "<<b<<std::endl;

    return result;
}
char min(char c,char d);
char min(char c,char d)
{
    if(c>d)
    return c;
    else
    return d;
}

double min1 (double c,double d)
{
    if(c>d)
    return c;
    else
    return d;
}

int main()
{
    char b{54},a{78};
    double f{31.44},g{87.33};
    std::cout<<std::endl;
    std::cout<<"Calling min function with char arguments : "<<std::endl;
    int x=min(b,a);
    std::cout<<"min("<<static_cast<int>(b)<<","<<static_cast<int>(a)<<") :"<<x<<std::endl;
    std::cout<<std::endl;
    std::cout<<"Calling min function with double arguments :"<<std::endl;
    int y=min1(f,g);
    std::cout<<"min("<<static_cast<int>(f)<<","<<static_cast<int>(g)<<") :"<<y<<std::endl;
    std::cout<<"Calling func function with double arguments : "<< func(f,g)<<std::endl;
    return 0;
    
}

    
