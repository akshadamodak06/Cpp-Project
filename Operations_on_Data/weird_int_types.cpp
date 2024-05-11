#include <iostream>
int main()
{
    short int x {10};
    short int y {20};
    char z {40};
    char w {50};

    std::cout<<"The value of x is "<<x<<" and its size is "<<sizeof(x)<<std::endl;
    std::cout<<"The value of y is "<<y<<" and its size is "<<sizeof(y)<<std::endl;
    std::cout<<"The char z is "<<z<<" and its size is "<<sizeof(z)<<std::endl;
    std::cout<<"The char w is "<<w<<" and its size is "<<sizeof(w)<<std::endl;

    auto result1 = x+y;//result1 comes out to be an integer .This is done by compiler .Short int or charachter do not have enough space to add and store i thier respective data types.
    auto result2 = z+w;

    std::cout<<"result1 is "<<result1<<"and its size is "<<sizeof(result1)<<std::endl;
    std::cout<<"result2 is "<<result2<<"and its size is "<<sizeof(result2)<<std::endl;
    return 0;
}    
