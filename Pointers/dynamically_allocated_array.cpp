#include <iostream>

int main()
{
    size_t size{10};
    //different ways to declare an array
    //dynamically and how they are initialised

    double *ptr {new double[size]};
    int *ptr1 {new(std::nothrow) int[size]{}};//all values initialised to zero
    double *ptr2{new(std::nothrow) double[size]{1,2,3,4,5}};//allocating memory space
    //for an array of size double variables .First 5 will be initialised with 1,2,3,4,5
    //the rest of them with 0.

    //nullptr check and use the allocated array
    if(ptr2)
    {
        std::cout<<"size of scores (it's a regular point
          er) : "<<sizeof(ptr2)<<std::endl;
        std::cout<<"Successfully allocated memory for scores."<<std::endl;

        //print out elements.can use regular array access notation,or pointer aritmetic
        for(size_t i{};i<size;i++)
        {
            std::cout<<"value : "<<ptr2[i]<<" : "<<*(ptr2+i)<<std::endl;

            delete ptr;
            ptr=nullptr;
            delete ptr1;
            ptr1=nullptr;
            delete ptr2;
            ptr2=nullptr;

            //static array vs dynamic arrays

            int scores[10] {1,2,3,4,5,6,7,8,9,10};

            std::cout<<"scores size : "<<sizeof(scores)<<std::endl;
            for(auto s:scores)
            {
                std::cout<<"value : "<<s<<std::endl;
            }
            /*
            int *scores1 =new int[10]{1,2,3,4,5,6,7,8,9,10};
            std::cout<<"p_scores1 size : "<<std::size(scores1)<<std::endl;
            for(auto s:scores1)
            {
                std::cout<<"value : "<<s<<std::endl;
            }
            */
           //this does not work 
        }

    }







}
