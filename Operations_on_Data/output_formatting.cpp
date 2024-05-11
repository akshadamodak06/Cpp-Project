#include<iostream>
#include<iomanip>

int main()
{
    using namespace std;
    //std::endl places a new line charachter on the output stream.
    cout<<"Hello";
    cout<<endl;
    cout<<"World\n"<<"How are you?";
    //std::setw() :Adjusts the field with for the item about to be printed.
    //the setw() manipulator only affects the next value to be printed.
    //setfill() fills the empty spaces

    cout<<"Unformated Table: "<<endl;
    cout<<"ABC"<<" "<<"DEF"<<"123"<<endl;
    cout<<"GHI"<<" "<<"JKL"<<"456"<<endl;
    cout<<"MNO"<<" "<<"PQR"<<"789"<<endl;
    cout<<endl;

    cout<<"Formatted Table: "<<endl;
    cout<<setw(10)<<"ABC"<<setw(10)<<"DEF"<<setw(10)<<"123"<<endl;
    cout<<setw(10)<<"GHI"<<setw(10)<<"JKL"<<setw(10)<<"456"<<endl;
    cout<<setw(10)<<"MNO"<<setw(10)<<"PQR"<<setw(10)<<"789"<<endl;
    cout<<endl;
    
    cout<<"Formatted Table with variables : "<<endl;
    int x;
    cout<<"Enter the column width : ";
    cin>>x;
    cout<<setw(x)<<"ABC"<<setw(x)<<"DEF"<<setw(x)<<"123"<<endl;
    cout<<setw(x)<<"GHI"<<setw(x)<<"JKL"<<setw(x)<<"456"<<endl;
    cout<<setw(x)<<"MNO"<<setw(x)<<"PQR"<<setw(x)<<"789"<<endl;
    cout<<endl;

    cout<<"Formatted Table with variables and left alignment : "<<endl;
    cout<<left;
    cout<<"Enter the column width : ";
    cin>>x;
    cout<<setw(x)<<"ABC"<<setw(x)<<"DEF"<<setw(x)<<"123"<<endl;
    cout<<setw(x)<<"GHI"<<setw(x)<<"JKL"<<setw(x)<<"456"<<endl;
    cout<<setw(x)<<"MNO"<<setw(x)<<"PQR"<<setw(x)<<"789"<<endl;
    cout<<endl;

    cout<<"Formatted Table with variables and right alignment : "<<endl;
    cout<<right;
    cout<<"Enter the column width : ";
    cin>>x;
    cout<<setw(x)<<"ABC"<<setw(x)<<"DEF"<<setw(x)<<"123"<<endl;
    cout<<setw(x)<<"GHI"<<setw(x)<<"JKL"<<setw(x)<<"456"<<endl;
    cout<<setw(x)<<"MNO"<<setw(x)<<"PQR"<<setw(x)<<"789"<<endl;
    cout<<endl;

    cout<<"Formatted Table with variables and right alignment and no empty spaces : "<<endl;
    cout<<right;
    cout<<setfill('*');
    cout<<"Enter the column width : ";
    cin>>x;
    cout<<setw(x)<<"ABC"<<setw(x)<<"DEF"<<setw(x)<<"123"<<endl;
    cout<<setw(x)<<"GHI"<<setw(x)<<"JKL"<<setw(x)<<"456"<<endl;
    cout<<setw(x)<<"MNO"<<setw(x)<<"PQR"<<setw(x)<<"789"<<endl;
    cout<<endl;

   // std::showpos to indicate positive or negative sign in front of integer
    //std::noshowpos to end showpos 
    
    int a {45};
    int b {-30};
    cout<<showpos;
    cout<<"The number a is : "<<a<<endl;
    cout<<"The number b is : "<<b<<endl;
    
    //std::dec,std::hex,std::oct

    int pos_int {717171};
    int neg_int {-47347};
    double double_var {498.32};

    std::cout <<std::endl;
    std::cout<<"default base form : "<<std::endl;
    std::cout<<"post_int : "<<pos_int <<std::endl;
    std::cout<<"neg_int : "<<neg_int<<std::endl;
    std::cout<<"double_var : "<<double_var << std::endl;

    std::cout <<std::endl;
    std::cout<<"pos_int in different format : "<<std::endl;
    std::cout<<"pos_int (dec) : "<<dec<<pos_int <<std::endl;
    std::cout<<"pos_int (hex) : "<<hex<<pos_int<<std::endl;
    std::cout<<"pos_int (oct) : "<<oct<<pos_int << std::endl;

    std::cout <<std::endl;
    std::cout<<"neg_int in different format : "<<std::endl;
    std::cout<<"neg_int (dec) : "<<dec<<neg_int <<std::endl;
    std::cout<<"neg_int (hex) : "<<hex<<neg_int<<std::endl;
    std::cout<<"neg_int (oct) : "<<oct<<neg_int << std::endl;

    std::cout <<std::endl;
    std::cout<<"double_var in different format : "<<std::endl;
    std::cout<<"double_var(dec) : "<<dec<<double_var<<std::endl;
    std::cout<<"double_var(hex) : "<<hex<<double_var<<std::endl;
    std::cout<<"double_var(oct) : "<<oct<<double_var << std::endl;

    cout<<noshowpos;

    //std::uppercase - converts lowercase into uppercase

    cout<<uppercase;
    std::cout<<"pos_int in different form and uppercase : "<<std::endl;
    std::cout<<"pos_int (dec) : "<<dec<<pos_int <<std::endl;
    std::cout<<"pos_int (hex) : "<<hex<<pos_int<<std::endl;
    std::cout<<"pos_int (oct) : "<<oct<<pos_int << std::endl;

    //std::fixed,std::scientic

    double p {3.1415926535897932384626433832795};
    double q {2006.0};
    double r {1.34e-10};
    
    cout<<"double values (default)"<<endl;
    cout<<"p is : "<<p<<endl;
    cout<<"q is : "<<q<<endl;
    cout<<"r is : "<<r<<endl;
    cout<<endl;

    cout<<fixed;
    cout<<"double values (fixed)"<<endl;
    cout<<"p is : "<<p<<endl;
    cout<<"q is : "<<q<<endl;
    cout<<"r is : "<<r<<endl;
    cout<<endl;

    cout<<scientific;
    cout<<"double values (scientific)"<<endl;
    cout<<"p is : "<<p<<endl;
    cout<<"q is : "<<q<<endl;
    cout<<"r is : "<<r<<endl;
    cout<<endl;

    cout<<"double values (to default) "<<endl;
    cout.unsetf(std::ios::scientific | std::ios::fixed);//sets the std::scientific and fixed off
    cout<<"p is : "<<p<<endl;
    cout<<"q is : "<<q<<endl;
    cout<<"r is : "<<r<<endl;
    cout<<endl;

    //setprecision() is used to set precision that is to specify the number of digits after the decimal point.
    double z;
    z=3.141592653589793238462643382795;
    cout<<setprecision(6);
    cout<<"z is :"<<z<<endl;
    cout<<setprecision(10);
    cout<<"z is also : "<<z<<endl;
    cout<<setprecision(20);
    cout<<"z is also : "<<z<<endl;
    cout<<setprecision(35);
    cout<<"z is also : "<<z<<endl;//garabage values added as precision is bigger than supported by the type.
   
    //std::showpoint and std::noshowpoint show point if necessary

    double m {34.1},n {101.99},o {12.0},l{45};
    cout<<endl;
    cout<<"Default : "<<endl;
    cout<<"l is : "<<l<<endl<<"m is : "<<m<<endl<<"n is :"<<n<<endl<<"o is : "<<o<<endl;
    cout<<showpoint;
    cout<<"Showpoint"<<endl;
    cout<<"l is : "<<l<<endl<<"m is : "<<m<<endl<<"n is :"<<n<<endl<<"o is : "<<o<<endl;
    cout<<noshowpoint;
    cout<<"Noshowpoint"<<endl;
    cout<<"l is : "<<l<<endl<<"m is : "<<m<<endl<<"n is :"<<n<<endl<<"o is : "<<o<<endl;
    return 0;
}
