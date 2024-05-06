#include <iostream>
int main()
{
    char message[] {'H','e','l','l','o'};
    std::cout<<"message : ";
    for(auto c:message)
    {
        std::cout<<c;

    }
    std::cout<<std::endl;
    message[0]='b';
    std::cout<<"message : ";
    for(auto c1 : message)
    {
        std::cout<<c1;

    }
    
    std::cout<<std::endl<<std::endl;
    char message1 [] {'H','e','l','l','o'};
    std::cout<<"message1 : "<<message1<<std::endl;//prints garbage value 
    std::cout<<"sizeof(message1) : "<<sizeof(message1)<<std::endl;

    char message2 [] {'H','e','l','l','o','\0'};
    std::cout<<"message2 : "<<message2<<std::endl;
    std::cout<<"sizeof(message2) : "<<sizeof(message2)<<std::endl;

    char message3 [6] {'H','e','l','l','o'};
    std::cout<<"message3 : "<<message3<<std::endl;
    std::cout<<"sizeof(message3) : "<<sizeof(message3)<<std::endl;

    char message4 [6] {'H','e','l','l','o','\0'};
    std::cout<<"message4 : "<<message4<<std::endl;
    std::cout<<"sizeof(message4) : "<<sizeof(message4)<<std::endl;

    char message5 [] ="Hello,What are you doing ?";
    std::cout<<"message5 : "<<message5<<std::endl;
    std::cout<<"sizeof(message5) : "<<sizeof(message5)<<std::endl;

    //charachter arrays are really special as we can directly print them out easily on the console .
    //to prove this let us write an integer array abnd try to print it like charachters

    int numbers[] {1,2,3,4,5};
    std::cout<<"numbers: "<<numbers<<std::endl;
    //tis does not give a compilation error.

return 0;
}
