#include <iostream>
#include<cmath>

int main()
{
    //std::floor shows the previous integer to the number x and ceil shows the next integer  
    double x=8.98;
    std::cout <<"Weight rounuded to floor is : "<<std::floor(x)<<std::endl;
    std::cout <<"Weight rounded to ceil is : "<<std::ceil(x)<<std::endl;

    //std::abs shows the absolute value of the number
    double y {-1000};
    std::cout <<"Absolute value of x is : "<<std::abs(x)<<std::endl;
    std::cout <<"Absolute value of y is : "<<std::abs(y)<<std::endl;

    //std::exp(k) computes e to the power of any integer k 
    double z;
    int k {10};
    z=std::exp(k);
    std::cout<<"Exponential e to the power "<<k<<" is : "<<z<<std::endl;

    //std::pow() computes power of number x to y

    std::cout<<"3^4 is : "<<pow(3,4)<<std::endl;
    std::cout<<"9^3 is : "<<pow(9,3)<<std::endl;
    
    return 0;
}
