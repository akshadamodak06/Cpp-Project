#include <iostream>
const double PI{3.1415926535897932384626433832795};
class Cylinder 
{
    public:
    Cylinder()=default;
    Cylinder(double r,double h)
    {
        radius=r;
        height=h;
    }
    double volume()
    {
        return PI*radius*radius*height;
    }
    private:
    double radius{1.0} , height{1.0};
};
int main()
{
    //without the default constructor the statement is not possible
    //This is cause the code already had a constructor so it would not form a default constructor

    Cylinder c;
    std::cout<<"Volume : "<<c.volume()<<std::endl;
    return 0;
}
