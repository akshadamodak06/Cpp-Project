#include <iostream>
#include <string>

    void max_str(const std::string &input1 ,const std::string input2,std::string&output )
    {
        if(input1>input2)
        {
            output=input1;
        }
        else
        {
            output=input2;
        }
    }

    void max_int(int input1,int input2,int &output)
    {
        if(input1>input2)
        {
            output=input1;
        }
        else
        {
            output=input2;
        }
    }

    void max_double(double input1,double input2,double *output)
    {
        if(input1>input2)
        {
            *output=input1;
        }
        else
        {
            *output=input2;
        }
    }

    int main()
    {
        std::string z;
        std::string x("Casablanca");
        std::string y("Belleuve");
        max_str(x,y,z);
        std::cout<<"Max string : "<<z<<std::endl;
        int x1{300},y1{43},z1;
        max_int(x1,y1,z1);
        std::cout<<"Max : "<<z1<<std::endl;
        double x2{300.56},y2{435},z2;
        max_double(x2,y2,&z2);
        std::cout<<"Max : "<<z2<<std::endl;
    }
