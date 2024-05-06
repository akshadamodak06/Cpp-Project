#include <iostream>
#include <cstring>
int main()
{
    std::cout<<"Using strlen : ";
    const char ch1[] {"The sky is blue."};
    //array decays into pointer when we use const char*
    const char* ch2 {"The sky is blue."};
    
    std::cout<<"Message1 : "<<ch1<<std::endl;
    std::cout<<"strlen(ch1) : "<<std::strlen(ch1)<<std::endl;
    std::cout<<"sizeof() : "<<sizeof(ch1)<<std::endl;
    std::cout<<"strlen(ch2) : "<<std::strlen(ch2)<<std::endl;
    std::cout<<"sizeof() : "<<sizeof(ch2)<<std::endl;

    std::cout<<"Using strcmp : ";
    //std::strcmp - signature : int strcmp(const char *lhs,const char *rhs);
    //Returns negative value if lhs appears before rhs in lexicographical order,
    //zero if lhs and rhs compare equal.
    //and positive value if lhs appears after rhs in lexicographical order.

    std::cout<<std::endl;
    const char* ch3{"Alabama"};
    const char* ch4{"Blabama"};
    std::cout<<"std::strcmp ("<<ch3<<" , "<<ch4<<" ) : "<<std::strcmp(ch3,ch4)<<std::endl;

    ch3="Alabamb";
    ch4="Alabama";

    std::cout<<"std::strcmp ("<<ch3<<" , "<<ch4<<" ) : "<<std::strcmp(ch3,ch4)<<std::endl;

    size_t n{3};
    std::cout<<"Using std::strncmp : "<<std::endl;
    std::cout<<"std::strncmp ("<<ch3<<" , "<<ch4<<" , "<<n<<") : "<<std::strncmp(ch3,ch4,n)<<std::endl;
     
    ch3="aaaia";
    ch4="aaance";
    std::cout<<"std::strncmp ("<<ch3<<" , "<<ch4<<" , "<<n<<") : "<<std::strncmp(ch3,ch4,n)<<std::endl;

    std::cout<<std::endl;
    std::cout<<"Using std::strchr : "<<std::endl;
    const char * y{"Try not.Do, or do not.There is no try."};
    char ch{'T'};
    const char * x=y;
    int counter {0};

    while((x=std::strchr(x,ch) )!= nullptr)
    {
        std::cout<<"Found : "<<ch<<" starting at "<<x<<"\n";
        x++;
        counter++;
    }
    std::cout<<"Counter : "<<counter<<std::endl;

    std::cout<<std::endl;
    std::cout<<"std::strrchr : "<<std::endl;

    char input[]="/home/user/hello.cpp";
    char *output =std::strrchr(input,'/');
    if(output)
    {
        std::cout<<output+1<<std::endl;
    }
    return 0;
}







    
    






    


    




