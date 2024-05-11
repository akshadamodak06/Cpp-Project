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

     std::cout<<"Using break statements :"<<std::endl;

    int result;
    std::cout<<"Enter the result from 10 to 80 :" ;
    std::cin>>result;

   

    switch(result)
    {
        case (10):
        {
            std::cout<<"The grade is a"<<std::endl;  
        }
        break;
        case (20):
        {
            std::cout<<"The grade is b"<<std::endl;  
        }
        break;
        case (30):
        {
            std::cout<<"The grade is c"<<std::endl;  
        }
        break;
        case (40):
        {
            std::cout<<"The grade is d"<<std::endl;  
        }
        break;
        case (50):
        {
            std::cout<<"The grade is e"<<std::endl;  
        }
        break;
        case (60):
        {
            std::cout<<"The grade is f"<<std::endl;  
        }        break;
        case (70):
        {
            std::cout<<"The grade is g"<<std::endl;  
        }
        break;
        case (80):
        {
            std::cout<<"The grade is h"<<std::endl;  
        }
        break;
        default:
        {
            std::cout<<"You have failed"<<std::endl;
        }

    }

    std::cout<<"Without using break "<<std::endl;

    std::cout<<"Enter the result from 10 to 80 :" ;
    std::cin>>result;

    switch(result)
    {
        case (10):
        {
            std::cout<<"The grade is a"<<std::endl;  
        }
       // break;
        case (20):
        {
            std::cout<<"The grade is b"<<std::endl;  
        }
        //break;
        case (30):
        {
            std::cout<<"The grade is c"<<std::endl;  
        }
        //break;
        case (40):
        {
            std::cout<<"The grade is d"<<std::endl;  
        }
        //break;
        case (50):
        {
            std::cout<<"The grade is e"<<std::endl;  
        }
        //break;
        case (60):
        {
            std::cout<<"The grade is f"<<std::endl;  
        }       
        // break;
        case (70):
        {
            std::cout<<"The grade is g"<<std::endl;  
        }
       // break;
        case (80):
        {
            std::cout<<"The grade is h"<<std::endl;  
        }
        //break;
        default:
        {
            std::cout<<"You have failed"<<std::endl;
        }

    }



    
    return 0;
}
