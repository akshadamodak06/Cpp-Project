#include<iostream>
int main()
{
    int x {20};
    int y {18};

    bool result =(x<y);
    std::cout<<std::boolalpha<<"Result : "<<result<<std::endl;
    std::cout<<std::endl;
    std::cout<<"using only if statement"<<std::endl<<std::endl;
    if(result == true)
    {
        std::cout<<x<<" is less than "<<y<<std::endl;
    }
    if(!(result == true))
    {
        std::cout<<y<<" is less than "<<x<<std::endl;
    }
    
    std::cout<<"using if and else "<<std::endl;
    if(result == true)
    {
        std::cout<<x<<" is less than "<<y<<std::endl;
    }
    else
    {
        std::cout<<y<<" is less than "<<x<<std::endl;
    }
     

    std::cout<<std::endl;
    std::cout<<"Using nested if else "<<std::endl;

    bool red=false,green = true,yellow=false,ps=true;
    if(green)
    {
        std::cout<<"Stop"<<std::endl;
        if(ps)
        {
            std::cout<<"Stop"<<std::endl;
        }
        else
        {
            std::cout<< "Go"<<std::endl;
        }
    }

    
    std::cout<<std::endl;
    std::cout<<"Avoiding nested if else "<<std::endl;
    if(green&& !(ps))
    {
        std::cout<< "Go"<<std::endl;
    }
    else
    {
        std::cout<< "Stop"<<std::endl;
    }
    
    



    return 0;

}
