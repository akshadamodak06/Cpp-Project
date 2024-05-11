#include<iostream>
using namespace std;
class Complex;
class Calculator
{
    public :
    int add(int a,int b)
    {
        return (a+b);
    }
    int sumreal(Complex o1,Complex o2);
    int sumcomp(Complex o1,Complex o2);
    
};

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
    friend int Calculator::sumreal(Complex o1,Complex o2);
    friend int Calculator::sumcomp(Complex o1,Complex o2);
    void print()
    {
        cout<<"Your number is "<<a <<" + "<<b<<"i"<<endl;
    }
};
int Calculator::sumreal(Complex o1,Complex o2)
{
    return (o1.a+o2.a);
}
int Calculator::sumcomp(Complex o1,Complex o2)
{
    return (o1.b+o2.b);
}


int main()
{
    Complex c1,c2;
    c1.set(4,7);
    c2.set(5,9);
    Calculator c11;
    int res=c11.sumreal(c1,c2);
    int resc=c11.sumcomp(c1,c2);
    cout<<res<<endl;
    cout<<resc;
    return 0;

}
