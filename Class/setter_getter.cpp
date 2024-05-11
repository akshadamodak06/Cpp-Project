//Methods present in our class to read or modify member variables of a class
//We can use getters to indirectly access the private members in a private .
#include <iostream>
const double PI{3.1415926535897932384626433832795};
class Cylinder
{
    public:
    Cylinder()=default;
    double getr()
    {
        return radius;
    }
    double geth()
    {
        return height;
    }
    void setr(double r)
    {
        radius =r;
    }
    void seth (double h)
    {
        height =h;
    }
    Cylinder(double r,double h)
    {
        radius=r;
        height =h;
    }
    double volume()
    {
        return PI*radius*radius*height;
    }
    private:
    double radius {1000},height {1.0};
};
int main()
{
    Cylinder c;
    std::cout<<"Radius : "<<c.getr()<<std::endl;
    Cylinder c1(2,3);
    std::cout<<"Revised Radius : "<<c1.getr()<<std::endl;
    std::cout<<"Volume : "<<c.volume()<<std::endl<<"Revised Volume : "<<c1.volume();


    return 0;
}
