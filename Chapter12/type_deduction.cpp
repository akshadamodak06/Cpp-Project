#include <iostream>
template<typename T>
T max1(T a, T b)
{
    return (a>b)?a:b;
}

int main()
{
    int a{10},b{15};
    double a1{13.55},b1{54.67};
    std::string e{"Hello"},f{"World!"};
    auto result = max1<double>(a,a1);
    std::cout<<"Max : "<<result<<std::endl;
    return 0;
}
