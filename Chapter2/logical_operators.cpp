#include<iostream>
int main()
{
    bool a {true},b {false},c {true};
    std::cout<<std::boolalpha;
    
    std::cout<<"a : "<<a<<std::endl;
    std::cout<<"b : "<<b<<std::endl;
    std::cout<<"c : "<<c<<std::endl;
    std::cout<<"AND operation"<<std::endl;
    std::cout<<std::endl;
    std::cout<<"a&&b :"<<(a && b)<<std::endl;
    std::cout<<"a&&c:"<<(a && c)<<std::endl;
    std::cout<<"a&&b&&c :"<<(a && b && c)<<std::endl;
    std::cout<<"OR operation"<<std::endl;
    std::cout<<std::endl;
    std::cout<<"a||b :"<<(a||b)<<std::endl;
    std::cout<<"a||c :"<<(a||c)<<std::endl;
    std::cout<<"a||c||b :"<<(a||c||b)<<std::endl;
    std::cout<<std::endl;
    std::cout<<"NOT operation"<<std::endl;
    std::cout<<"!a :"<<(!a)<<std::endl;
    std::cout<<"!b :"<<(!b)<<std::endl;
    std::cout<<"!c :"<<(!c)<<std::endl;
    std::cout<<std::endl;
    std::cout<<"Mixed Operations : "<<std::endl;
    std::cout<<"!(a&&b)||c : "<<(!(a&&b)||c)<<std::endl;
    return 0;
}





  
