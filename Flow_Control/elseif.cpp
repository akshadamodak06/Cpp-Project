#include <iostream>

int main()
{
    const int a{10};
    const int b{20};
    const int c{30};
    const int d{40};
    const int e{50};
    const int f{60};
    const int g{70};
    const int h{80};

    int result;
    std::cout<<"Enter the result from 10 to 80 :" ;
    std::cin>>result;
    if(result==10)
    {
        std::cout<<"The grade is a"<<std::endl;
    }
    else if(result==20)
    {
        std::cout<<"The grade is b"<<std::endl;
    }
    else if(result==30)
    {
        std::cout<<"The grade is c"<<std::endl;
    }
    else if(result==40)
    {
        std::cout<<"The grade is d"<<std::endl;
    }
    else if(result==50)
    {
        std::cout<<"The grade is e"<<std::endl;
    }
    else if(result==60)
    {
        std::cout<<"The grade is f"<<std::endl;
    }
    else if(result==70)
    {
        std::cout<<"The grade is g"<<std::endl;
    }
    else if(result==80)
    {
        std::cout<<"The grade is h"<<std::endl;
    }
    else
    {
        std::cout<<"You have failed";
    }

    return 0;

     


}
