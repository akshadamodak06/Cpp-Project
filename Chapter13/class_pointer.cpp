#include<iostream>
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
        radius=r; 
    }
    void seth(double h)
    {
        height=h; 
    }
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
    double radius{1.0},height{1.0};
};

int main()
{
    Cylinder c3(10,10);
    Cylinder *c1=&c3; 
    std::cout<<"Using initialised pointer object stored in stack: "<<std::endl;
    std::cout<<"Radius : "<<c1->getr()<<std::endl;
    std::cout<<"Height : "<<(*c1).geth()<<std::endl;
    std::cout<<"Volume : "<<c1->volume()<<std::endl;
    std::cout<<std::endl;

    Cylinder *c4;
    std::cout<<"Using Uninitialised pointer object : "<<std::endl;
    std::cout<<"Radius : "<<c4->getr()<<std::endl;
    std::cout<<"Height : "<<(*c4).geth()<<std::endl;
    std::cout<<"Volume : "<<c4->volume()<<std::endl;
    std::cout<<std::endl;


    //Create a cylinder heap object through the new operator
    Cylinder c;
    std::cout<<"Using uninitialised object : "<<std::endl;
    std::cout<<"Radius : "<<c.getr()<<std::endl;
    std::cout<<"Height : "<<c.geth()<<std::endl;
    std::cout<<"Volume : "<<c.volume()<<std::endl;
    std::cout<<std::endl;
    
    Cylinder *c2=new Cylinder(100,2);
    std::cout<<"Using initialised pointer object stored in heap: "<<std::endl;
    std::cout<<"Radius : "<<c2->getr()<<std::endl;
    std::cout<<"Height : "<<(*c2).geth()<<std::endl;
    std::cout<<"Volume : "<<c2->volume()<<std::endl;
    std::cout<<std::endl;
    delete c2;

    /*
    default constructor for a pointer
    Cylinder() : ptr(null ptr) {}

    private:
    int *ptr;

    There is also another method tomake a pointer directly point to members present in the private 
    space in class.(Ask chatgpt!!!)
    */


} 
