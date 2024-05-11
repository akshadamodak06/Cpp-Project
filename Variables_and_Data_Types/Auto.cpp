#include <iostream>
#include<iomanip>
int main()
{
    auto var1{10.3};
    auto var2{10};
    auto var3{'a'};
    auto var4{14.0L};
    auto var5{10.3f};
    auto var6{10u};
    auto var7{123ul};
    auto var8{123ll};
    auto var8 {'c'};


   
    std::cout<<std::setprecision(20);
std::cout<<"Element is "<<var1<<" and its size is "<<sizeof(var1)<<std::endl;
std::cout<<"Element is "<<var2<<" and its size is "<<sizeof(var2)<<std::endl;
std::cout<<"Element is "<<var3<<" and its size is "<<sizeof(var3)<<std::endl;
std::cout<<"Element is "<<var4<<" and its size is "<<sizeof(var4)<<std::endl;
std::cout<<"Element is "<<var5<<" and its size is "<<sizeof(var5)<<std::endl;
std::cout<<"Element is "<<var6<<" and its size is "<<sizeof(var6)<<std::endl;
std::cout<<"Element is "<<var7<<" and its size is "<<sizeof(var7)<<std::endl;
std::cout<<"Element is "<<var8<<" and its size is "<<sizeof(var8)<<std::endl;

return 0;

    
}
