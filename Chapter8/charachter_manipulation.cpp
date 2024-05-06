#include <iostream> 
#include <string.h>
#include <cctype>
#include <locale>
int main()
{
    std::cout<<"Using Alphanumeric"<<std::endl;
    std::cout<<"std::isalnum : "<<std::endl;

    std::cout<<"C is alphanumeric : "<<std::isalnum('C')<<std::endl;
     std::cout<<"^ is alphanumeric : "<<std::isalnum('^')<<std::endl;

    char ch {'*'};
    if(std::isalnum(ch))
    {
        std::cout<<ch<<" is alphanumeric."<<std::endl;
    } 
    else
    {
        std::cout<<ch<<" is not alphanumeric."<<std::endl;
    }

    std::cout<<std::endl;
    std::cout<<"Using Alphabetic"<<std::endl;
    std::cout<<"C is alphabetic : "<<std::isalpha('C')<<std::endl;
    std::cout<<"^ is alphabetic : "<<std::isalpha('^')<<std::endl;
    std::cout<<"7 is alphabetic : "<<std::isalpha('7')<<std::endl;

    std::cout<<"Using Isblank"<<std::endl;
    char ch1[100] {"Hello there. How are you doing? The sun is shining."};
    std::cout<<"message : "<<ch<<std::endl;
    int counter=0;
    for(int i{0};i<strlen(ch1);++i)
    {
        if(ch1[i]==' ') //we can also use std::isblank in the if condition 
        {
            std::cout<<"Found a blank charachter at index : ["<<i<<"]"<<std::endl;
            counter++;
        }
    }
   
    std::cout<<"In total we found "<<counter<<" blank charachters."<<std::endl;
    std::cout<<"Using islower and isupper "<<std::endl;
    char thought[] {"The C++ Programming Language is one of the most used on the Planet."};
    int x=0;
    int y=0;
    std::cout<<"Original String : "<<thought <<std::endl;
    for(auto charachter : thought)
    {
        if(std::islower(charachter))
        {
            std::cout<<" "<<charachter;
            ++x;
        }
        if(std::isupper(charachter))
        {
            std::cout<<" "<<charachter;
            ++y;
        }
    }

        std::cout<<std::endl;
        std::cout<<"Found "<<x<<" lowercase charachters and "<<y<<" uppercase charachters"<<std::endl;
        std::cout<<std::endl;
        std::cout<<"std::isdigit : "<<std::endl;

        char ch2[] = {"Mr. Hamilton owns 221 cows. That's a lot of cows! The kid exclaimed."};
        std::cout<<"Statement : "<<ch2<<std::endl;
        int x1=0;
        for(auto charachter : ch2)
        {
            if(std::isdigit(charachter))
            {
                std::cout<<"Found digit : "<<charachter<<std::endl;
                x1++;
            }
        }

        std::cout<<"Found "<<x1<<"digits in the statement string"<<std::endl;

        std::cout<<std::endl;
        std::cout<<"Using std::toupper and std::tolower:"<<std::endl;
        char ch3[] ={"Home.The feeling of belonging"};
        char ch4[strlen(ch3)];

        for(int i{0};i<strlen(ch3);i++)
        {
            ch4[i]=std::toupper(ch3[i]);
        }

        std::cout<<"Original String : "<<ch3<<std::endl;
        std::cout<<"Uppercase String : "<<ch4<<std::endl;

        for(int i{0};i<strlen(ch3);i++)
        {
            ch4[i]=std::tolower(ch3[i]);
        }

    std::cout<<"Original String : "<<ch3<<std::endl;
    std::cout<<"Lowercase String : "<<ch4<<std::endl;
    return 0;
}
