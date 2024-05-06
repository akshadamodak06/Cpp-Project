#include <iostream>
int main()
{
    char *p{nullptr};
    char ch{'A'};
    p=&ch;
    std::cout<<"The value stored in p is : "<<*p<<std::endl;
    char ch1{'C'};
    p=&ch1;
    std::cout<<"The value stored in p is : "<<*p<<std::endl;
    
    //most compiler do not allow this ,it forbids.
    char *p1 {"Hello World!"};//this will convert it into array of charachters
    //it will be a string and this pointer points to its base address.

    std::cout<<"The message is : "<<p1<<std::endl;
    std::cout<<"The value stored at : "<<*p1<<std::endl;

    //to modify the string
    char message1[]="Hello World !";
    std::cout<<message1<<std::endl;
    message1[0]='Z';
    std::cout<<message1<<std::endl;
    

    return 0;





}
