//Properties of friend function
//1. Not in the scope of the class.Meaning we cannot access it like we access other function declared or defined in the class
//2.since it is not in the scope of the class,it cannot be called from the object of that class
//can be invoked without the help of the object
//usually contains the objects as arguments.
//can be declared inside the public or private section of the class
//it cannot access the members directly by their names and need obj name.
   
#include <iostream>
using namespace std;
class Complex
{
    private:
    int a,b;
    public :
    void set(int n1,int n2)
    {
        a=n1;
        b=n2;
    }
    friend Complex sum(Complex o1, Complex o2);
    void print()
    {
        cout<<"Your number is "<<a <<" + "<<b<<"i"<<endl;
    }
};

Complex sum(Complex o1, Complex o2)
{
    Complex o3;
    o3.set((o1.a+o2.a),(o1.b+o2.b));
    return o3;
}


int main()
{
    Complex c1,c2,sum1;
    c1.set(1,4);
    c1.print();
    c2.set(5,10);
    c2.print();
    sum1=sum(c1,c2);
    sum1.print();
   
}
