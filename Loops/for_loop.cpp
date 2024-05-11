#include <iostream>
int main()
{
    int i=0;
    for(i=0;i<10;++i)
    {
        std::cout<<"The value of the counter is "<<i<<" and I Love C++"<<std::endl;

    }
    //size_t is the return type of the sizeof() operator.
    std::cout<<std::endl;
    for(size_t j{0};j<10;j++)
    {
        std::cout<<"The value of j is "<<j<<std::endl;
    } 

    std::cout<<std::endl;
     int k=1;
     for(;;)
     {
        std::cout<<"The value of k is "<<k<<std::endl;
        k++;
        if(k == 10)
        {
            break;
        }
     }


    return 0;

}
