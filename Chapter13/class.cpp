//classes are mechanism in c++ that let us build our own data types.
//by default all the members of the class are private
//so they are not accesible outside class by default.
//order of declaration of variables does not matter in class
//member variables can be stack variables or pointers
//they can never be pointers 
// classeshave functon functions (methods)that let them do things
// class methods have access to member variables , regardless of whether they are private or public

# include <iostream>
const double PI{3.1415926535897932384626433832795};
class Cylinder
{
    public:
    double radius;
    double height;

    public:
    double volume()
    {
        return PI*radius*radius*height;
    }
};

int main()
{
    Cylinder c1;//objects
    std::cout<<"Height of cylinder : "<<c1.height<<std::endl;
    std::cout<<"Radius of cylinder : "<<c1.radius<<std::endl;
    std::cout<<"Volume of cylinder(variables unintialised) : "<<c1.volume()<<std::endl;
    Cylinder c2;
    c2.radius=8.96;
    c2.height=5.34;
    std::cout<<"Height of cylinder : "<<c2.height<<std::endl;
    std::cout<<"Radius of cylinder : "<<c2.radius<<std::endl;
    std::cout<<"Volume of cylinder(variables unintialised) : "<<c2.volume()<<std::endl;

    return 0;
}
