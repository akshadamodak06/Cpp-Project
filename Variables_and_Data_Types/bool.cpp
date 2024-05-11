#include <iostream>
int main()
{
    bool red {false};
    bool green {true};

    if(red==true)
    {
        std::cout << "Stop" <<std::endl;
    }
    else
    {
        std::cout<<"Go through!!"<<std::endl;
    }

    if(green)
    {
        std::cout<<"The light is green: "<<std::endl;
    }
    else
    {
        std::cout<<"The light is NOT green"<<std::endl;
    }

    std::cout<<"The red light is: "<<red<<std::endl;
    std::cout<<"The green light is: "<<green<<std::endl;
    std::cout<<"Size of bool is : "<<sizeof(red)<<std::endl;

    std::cout<<std::boolalpha;
    std::cout<<"The red light is: "<<red<<std::endl;
    std::cout<<"The green light is: "<<green<<std::endl;

    return 0;
}
