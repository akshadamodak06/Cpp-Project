#include <iostream>
int main()
{
    int *ptr1;//points to address of a variable with data type int
    double *ptr2;//points to address of a variable of data type double
    int *ptr3 {nullptr};

    std::cout<<"sizeof(int) is "<<sizeof(int)<<std::endl;
    std::cout<<"sizeof(double) is "<<sizeof(double)<<std::endl;
    std::cout<<"sizeof(double*) is "<<sizeof(double*)<<std::endl;
    std::cout<<"sizeof(int *) is "<<sizeof(int*)<<std::endl;
    std::cout<<"sizeof(ptr3) is "<<sizeof(ptr3)<<std::endl;

    //it does not matter where we put the * mark i.e,close or away from data type
    int* ptr4{nullptr};
    int *ptr5{nullptr};
    int * ptr6{nullptr};
    std::cout<<"sizeof(ptr4) : "<<sizeof(ptr3)<<std::endl;
    std::cout<<"sizeof(ptr5) : "<<sizeof(ptr5)<<std::endl;
    std::cout<<"sizeof(ptr6) : "<<sizeof(ptr6)<<std::endl;

    int *ptr7{}, x{};
    int* ptr8{}, y{};

    std::cout<<"sizeof(ptr7) : "<<sizeof(ptr7)<<std::endl;
    std::cout<<"sizeof(x) : "<<sizeof(x)<<std::endl;
    std::cout<<"sizeof(ptr8) : "<<sizeof(ptr8)<<std::endl;
    std::cout<<"sizeof(y) : "<<sizeof(y)<<std::endl;

    int *p;
    int z {43};
    p=&z;
    std::cout<<"Int variable z has value : "<<*p<<std::endl<<"Int variable z is at the address : "<<p<<std::endl;
    //we can change te adress dtored in the pointer at any time 
    int a {78};
    p=&a;
    std::cout<<"Int variable a has value : "<<*p<<std::endl<<"Int variable a is at the address : "<<p<<std::endl;

    int *p1;
    double b{45};
   //compiler error :  p1=&b;

   //dereferencing a pointer

   int *ptrr {nullptr};
   int h{45};
   ptrr=&h;
   std::cout <<"value : "<<*ptrr <<std::endl;
   return 0;
}
