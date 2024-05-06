//Constructora are special kind of method that is called when an instance of class is created.
//They are special class methods or functions that are called by the compiler to construct class objects.
//They do not have return type hence they are special.
//they have the same name as class
//They can have parameters.The parameter list can also be empty
//They are usually used to initialise member variables of a class
#include<iostream>
const double PI{3.1415926535897932384626433832795};
class Cylinder
{
    public: 
    double volume()
    {
        return PI*radius*radius*height;
    }
    Cylinder()
    {
        radius = 2.0;
        height =2.0;
    }
    Cylinder(double r,double h)
    {
       radius=r;
       height=h;
    }

    private:
    double radius {1.0};
    double height {1.0};
};

int main()
{
    Cylinder c;
    /*
    We cannot execute this statement inspite of having a constructor .
    We need getter and setter for such methods 
    The getter will give radius =2 in this situation already present in the constructor.
    It will not give radius =1 which is given in private.
    std::cout<<"Radius : "<<c.radius<<std::endl;
*/
    std::cout<<"Volume(using constructor without parameter) : "<<c.volume()<<std::endl;
    Cylinder c1(10,4);
    std::cout<<"Volume(using constructor with parameter) : "<<c1.volume()<<std::endl;
    return 0;
}
//the question arises that the code functions completely even without constructors ,what is the need for constructor
//Reality Check: If our code does not have any constructor compiler forms another contructor without any data inside it ,always
//This is called default constructor.
//Default Constructor takes no parameters
//It initialises the member variables to garbage values
//If the class is derived from a base class that has a default constructor, the default constructor of the base class is also invoked.

