//Single Inheritance

#include <iostream>
using namespace std;

class Base{
    private:
    int data1;
    public:
    int data2;
    void setDat();
    int getData1();
    int getData2();
};
void Base::setDat()
{
    data1=10;
    data2=20;
}
int Base:: getData1()
{
    return data1;
}
int Base::getData2()
{
    return data2;
}


class Derived:public Base{
    int data3;
    public:
    void process();
    void display();  
};

void Derived::process()
{
    data3=data2*getData1();
}

void Derived::display()
{
    cout<<"Value of data 1 is "<<getData1()<<endl;
    cout<<"Value of data 2 is "<<data2<<endl;
    cout<<"Value of data 3 is "<<data3<<endl;          
}




int main()
{
    Derived der;
    Base b1;
    cout<<"Value of data1 : "<<b1.getData1()<<endl;
    der.setDat();
    der.process();
    der.display();

    return 0;
}
