//constructors in derived class

//We can use constructors in derived class
//If base class constructor does not have any arguments there is no need of any constructor in derived class.
//But if there are one or more arguments in the base class constructors,
//derived class needs to pass arguments to the base class constructor
//if both base and derived classes have constructors , base class sonstructor is executed first.

//In multiple inheritance,base classes are constructed in the order in which they appear in the class declaration .
//In multilvel inheritance the constructors are executed in the order of inheritance

//The constructors for virual base classes are invoked before an nonvirtyal vase class.
//If there are multiple virtual base classes,they are invoked in the order declared.
//any non virtua; base class are then constructed before the derived class constructor is executed.

#include <iostream>
using namespace std;
/* 
Case1:
class B:public A
{
    //Order of execution of constructor -> firstA() then B()
}
Case2:
class A: public B ,public C
{
    //Order of execution of constructor -> firstB() then C() then A()
}
Case3:
class A: public B , virtual public C()
{
    //Order of execution of constructor -> firstc() then B() then A()
}
*/

class Base1{
    int data1;
    public:
    Base1(int i)
    {
        data1 =i;
        cout<<"Base1 class constructor called "<<endl;
        
    }
    void print1(void)
        {
            cout<<"The value of data is "<<data1<<endl;
        }

};

class Base2
{
    int data2;
    public:
    Base2(int i)
    {
        data2 =i;
        cout<<"Base2 class constructor called "<<endl;
        
    }
    void print2(void)
        {
            cout<<"The value of data is "<<data2<<endl;
        }

};

class Derived: public Base2,public Base1
{
    private:
    int derived1,derived2;
    public:
    Derived(int a,int b,int c,int d):Base1(a),Base2(b)
    {
        derived1=c;
        derived2=d;
        cout<<"Derived class constructor called "<<endl;
    }
    void print()
    {
        cout<<"The value for derived1 and derived2 is "<<derived1 <<" and "<<derived2<< endl;
    }
};

int main()
{
    Derived z(1,10,100,1000);
    z.print1();
    z.print2();
    z.print();
    return 0;
}
