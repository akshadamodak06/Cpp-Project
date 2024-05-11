#include <iostream>
int main()
{
     int value {5};
     value = value + 1;
     std::cout<<"The value is : "<<value<<std::endl;
     value=5;
     value=value-1;
     std::cout<<"The value is : "<<value<<std::endl;
     std::cout<<"==========Postfix increment and decrement========"<<std::endl;
     value=5;
     std::cout<<"The value is (incrementing) : "<<value++<<std::endl;
     std::cout<<"The value is : "<<value<<std::endl;
     std::cout <<std::endl;
     value =5;
     std::cout<<"The value is (decrementing) : "<<value--<<std::endl;
     std::cout<<"The value is : "<<value<<std::endl;

     std::cout<<"==========Prefix increment and decrement========"<<std::endl;
     value=5;
     std::cout<<"The value is (incrementing) : "<<++value<<std::endl;
     std::cout<<"The value is : "<<value<<std::endl;
     std::cout <<std::endl;
     value =5;
     std::cout<<"The value is (decrementing) : "<<value--<<std::endl;
     std::cout<<"The value is : "<<value<<std::endl;


    
}
