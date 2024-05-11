//multilevel inheritance
#include<iostream>
using namespace std;

class Base1
{
    protected :
    int base1int;
    public:
    void set1(int a)
    {
        base1int= a;
    }
};
 
class Base2
{
    protected:
    int base2int;
    public:
    void set2(int a)
    {
        base2int=a;
    }
};

class Derived: public Base1,public Base2 
{
    public:
    void show()
    {
        cout<<"The value of Base1 is "<<base1int<<endl;
        cout<<"The value of Base1 is "<<base2int<<endl;
        cout<<"The sum of these values is "<<base1int+base2int<<endl;
    }
};

int main()
{
    Derived d;
    d.set1(30);
    d.set2(45);
    d.show();
    return 0;
}






