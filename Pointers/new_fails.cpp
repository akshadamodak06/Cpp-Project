#include <iostream>
int main()
{
   // int *data=new int[10000000000000];
   //doenot exectue since array is too large 
   //here the new operator fails
/*
   for(size_t i{0}; i<1000000000000000000000000000;i++)
   {
    int *ptr=new int [100000000];
   }
   not allowed 
   */

  for(size_t i{0};i<10000;i++)
{
    try
    { 
        int *data = new int [1000000];
    }
    catch( std::exception& ex)
    {
        std::cout <<"Something went wrong : "<< ex.what() << '\n';
    }
    std::cout<<"Program ended well : "<<std::endl;
    //here the above line gets printed .
    //thjis is because we ran the program and wewere able to catch the problem in it 
    //hence it is good practice to use try and catch block  


}
std::cout<<"Program ended well : "<<std::endl;

//we can use another method i.e,using std::nothrow

for(size_t i{0} ;i<100;i++)
{
    int *data =new(std::nothrow) int[10000000];
    if(data != nullptr)
    {
        std::cout<<"Data allocated"<<std::endl;
    }
    else
    {
        std::cout<<"Data allocation failed"<<std::endl;
    }
}

std::cout<<"Program ending well";

}









