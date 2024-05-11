#include<iostream>
int main()
{
    int scores[] ={1,2,3,4,5,6,7,8,9,10,11};
    std::cout<<"Size of scores : "<<sizeof(scores)<<std::endl;
    std::cout<<"Size of scores[0] : "<<sizeof(scores[0])<<std::endl;

    int count = (sizeof(scores)/sizeof(scores[0]));
    std::cout<<"No. of elements in the array : "<<count<<std::endl;
    std::cout<<"The elements in the array : "<<std::endl;
    for(int i=0;i<count;i++)
    {
        std::cout<<"The value of the element at place "<<i<<" is "<<scores[i]<<std::endl;
    }


    //range based for loop 
    std::cout<<"\n";
    std::cout<<"Using range based for loop : "<<std::endl;
    for(auto i :scores)
    {
        std::cout<<"The value of the element at place "<<i<<" is "<<scores[i]<<std::endl;
    }

    








}
