#include <iostream>
#include<cstring>
int main()
{
    std::cout<<std::endl;
    std::cout<<"std::strcat : "<<std::endl;
    char ch1[50]="Hello";
    char ch2[50]="World";

    std::strcat(ch1,ch2);
    std::cout<<"ch1 : "<<ch1<<std::endl;
    std::strcat(ch1," Goodbye World!");
    std::cout<<"ch1 : "<<ch1<<std::endl;

    char *ch3=new char[30]{'F','i','r','e','w','a','l','l','\0'};
    char *ch4=new char[30]{',',',','T','h','e',' ','P','h','o','e','n','i','x',' ','K','i','n','g'};
    std::cout<<"std::strlen(ch3) : "<<std::strlen(ch3)<<std::endl;
    std::cout<<"std::strlen(ch4) : "<<std::strlen(ch4)<<std::endl;

    std::cout<<"Concatenating ..."<<std::strlen(ch3)<<std::endl;
    std::cout<<"ch3 : "<<ch3<<std::endl;

    //std::strncat : concatenate n from one string to another
    //returns a pointer to the result string
    int n=5;
    std::cout<<"std::strncat : "<<std::endl;
    char ch5[50] {"Hello"};
    char ch6[50] {"There is a bird on my window"};
    std::cout<<std::strncat(ch5,ch6,n);
    //or we can do it separately 
    std::cout<<"The concatenated string is : "<<ch5<<std::endl;

    
    std::cout<<std::endl;
    std::cout<<"std::strcpy : "<<std::endl;
    const char* source ="C++ is a multipurpose programming language.";
    char  *source1 = new char[std::strlen(source) + 1];
    //+1 for the null charchter 
    //contains garbage data
    //not initialised

    std::strcpy(source1,source);
    std::cout<<"sizeof(ch5) : "<<sizeof(source)<<std::endl;
    std::cout<<"ch5 : "<<ch5<<std::endl;

    std::cout<<std::endl;
    std::cout<<"std::strncpy : "<<std::endl;
    const char* source3 ="Hello";
    char source4[]={"abcdef"};
    std::cout<<"Original String : "<<source4<<std::endl;
    std::cout<<"Copying..."<<std::endl;
    std::strncpy(source4,source3,5);
    std::cout<<"New String : "<<source4<<std::endl;  

    return 0;
}
