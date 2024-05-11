#include <iostream>
#include <cstring>
template<typename T>
T max1(T a,T b)
{
    return ((a>b)?a:b);
}

template<>
const char* max1 <const char*>(const char* a,const char *b)
{
    return (std::strcmp(a,b)>0)?a:b;
}


int main()
{
    const char* g {"Hello"},*h{"World"};
    const char* result = max1(g,h);
    std::cout<<"Result : "<<result<<std::endl;
    return 0;
}
