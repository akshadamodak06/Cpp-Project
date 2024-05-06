//Ambiguity Relation

#include <iostream>
using namespace std;
class Base1
{
    public:
    void func1()
    {
        cout<<"Hello"<<endl;
    }
};
class Base2
{
    public:
    void func1()
    {
        cout<<"Namaste"<<endl;
    }
};

class Derived: public Base1,public Base2
{
    public:
    void func1()
    {
        Base2::func1();
    }
    
};
class Derived1: public Base1,public Base2
{
    public:
    void func1(){}
    
};
int main()
{
    Derived d;
  //This line initiates the error that function is ambigous 
  // cout<<"Message : "<<d.func1()<<endl;
  //This is cleared by writing the function we have written in derived class.
    d.func1();
    Derived1 dr;
    dr.Base1::func1();
    return 0;
    
}
