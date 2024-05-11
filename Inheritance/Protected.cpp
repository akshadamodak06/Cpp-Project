//protected 
//whenever we inherit from parent vlass the member can only be iitialised using a constructor or member function
// the statements with // are inaccessible.
#include <iostream>
using namespace std;
class Base
{
    protected :
    int a=100;
    public:
    int b=200;
    int geta();
    int getb();
    int getc();
    private:
    int c=300;
   
};

int Base :: geta()
{
    return a;
}
int Base :: getb()
{
    return b;
}
int Base :: getc()
{
    return c;
}

class A: protected Base{
    public:
    A()
    {
        
        a=10;
        b=20;
        cout<<a<<endl;
        cout<<b<<endl;
       //Inaccesible  cout<<c<<endl;


       //Inaccesible :  c=30;
    }
    
};
class B: public Base{
    public:
    B()
    {
        
        a=10;
        b=20;
        cout<<a<<endl;
        cout<<b<<endl;
       //Inaccessible  c=30;        
    }

};
class C:private Base{
    public:
    C()
    {
        
        a=10;
        b=20;
        cout<<a<<endl;
        cout<<b<<endl;
       //Inaccessible c=30;        
    }


};

int main()
{
    Base z;
    A a1;
    B b1;
    C c1;
    //cout<<a1.a<<endl;
    //cout<<a1.b<<endl;
    //cout<<a1.c<<endl;
    //cout<<b1.a<<endl;
    cout<<b1.b<<endl;
    //cout<<b1.c<<endl;
    //cout<<c1.a<<endl;
    //cout<<c1.b<<endl;
    //cout<<c1.c<<endl;
    //cout<<z.a<<endl;
    cout<<z.b<<endl;
    //cout<<z.c<<endl;
    cout<<z.geta()<<endl;
    cout<<z.getb()<<endl;
    cout<<z.getc()<<endl;
    return 0;
  // the commented portions in int main cannot be accessed .
}


