#include <iostream>
int main ()
{
    //Declaring pointer and reference

    double x{12.34};
    double &x1{x};//reference to double x
    double *x2{&x};//pointer to address of x

    //Reading

    std::cout<<"x :"<<x<<std::endl;
    std::cout<<"x1(reference) :"<<x1<<std::endl;
    std::cout<<"x2(pointer) :"<<x2<<std::endl;
    std::cout<<"*x2(pointer) :"<<*x2<<std::endl;

    //Writing through pointer
    *x2=15.44;
     
    std::cout<<std::endl;
    std::cout<<"Writing through pointer : "<<std::endl;
    std::cout<<"x :"<<x<<std::endl;
    std::cout<<"x1(reference) :"<<x1<<std::endl;
    std::cout<<"x2(pointer) :"<<x2<<std::endl;
    std::cout<<"*x2(pointer) :"<<*x2<<std::endl;

    //Writing through reference
    x1=18.44;
    std::cout<<std::endl;
    std::cout<<"Writing through reference : "<<std::endl;
    std::cout<<"x :"<<x<<std::endl;
    std::cout<<"x1(reference) :"<<x1<<std::endl;
    std::cout<<"x2(pointer) :"<<x2<<std::endl;
    std::cout<<"*x2(pointer) :"<<*x2<<std::endl;

    double x3 {78.45};
    x1=x3;
    std::cout<<std::endl;
    std::cout<<"amking the reference something else.. "<<std::endl;
    std::cout<<"x :"<<x<<std::endl;
    std::cout<<"x1(reference) :"<<x1<<std::endl;
    std::cout<<"x2(pointer) :"<<x2<<std::endl;
    std::cout<<"*x2(pointer) :"<<*x2<<std::endl;

    double y {79.15};
    x1=x3;
    std::cout<<std::endl;
    std::cout<<"amking the reference something else.. "<<std::endl;
    std::cout<<"x :"<<x<<std::endl;
    std::cout<<"x1(reference) :"<<x1<<std::endl;
    std::cout<<"x2(pointer) :"<<x2<<std::endl;
    std::cout<<"*x2(pointer) :"<<*x2<<std::endl;

    x2=&y;
    std::cout<<std::endl;
    std::cout<<"amking the pointer something else.. "<<std::endl;
    std::cout<<"x :"<<x<<std::endl;
    std::cout<<"x1(reference) :"<<x1<<std::endl;
    std::cout<<"x2(pointer) :"<<x2<<std::endl;
    std::cout<<"*x2(pointer) :"<<*x2<<std::endl;
}
