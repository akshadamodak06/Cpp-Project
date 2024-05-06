//All the members in a struct are public by default unlike class.
#include <iostream>
class Dog
{
    public:
    std::string name;
};
struct Cat
{
    std::string name;
};
struct point
{
    double x,y;
};
void print(const point &p)
{
    std::cout<<"Point [ x: "<<p.x<<" , "<<"y: "<<p.y<<" ]"<<std::endl;
}
int main()
{
    Dog d;
    Cat c;
    point p;
    p.x=45.57;
    p.y=67.54;
    c.name="Whiskerson";
    d.name="Johnny";//Is not allowed until we write public in the class
    std::cout<<"Dog name : "<<d.name<<std::endl;
    std::cout<<"Cat name : "<<c.name<<std::endl;
    print(p);
    return 0;
}
