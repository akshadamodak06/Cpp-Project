#include <iostream>
using namespace std;
class Y;
class X
{
    int data;
    public :
    void set(int value)
    {
        data=value;
    }
    friend void Add(X,Y);
};

class Y
{
    int data;
    public :
    void set(int value)
    {
        data=value;
    }
    friend void Add(X,Y);
};

void Add(X o1,Y o2)
{
    cout<<"Summing from both class : "<<o1.data+o2.data;
}

int main()
{
    X a1;
    a1.set(10);
    Y b1;
    b1.set(12);
    Add (a1,b1);
    return 0;

}
