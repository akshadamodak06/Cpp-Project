//Constructor follow the order of the objects called however Destructors follow the opposite order.

#include<iostream>
class Dog
{
    public:
    Dog()=default;
    Dog(std::string s1,std::string s2,int n);
    ~Dog();

    private:
    std::string name;
    std::string breed;
    int *ptr;
};

Dog::Dog(std::string s1,std::string s2,int n)
{
    name = s1;
    breed = s2;
    ptr=new int{n};
    std::cout<<"Dog constructor called for : "<<name<<std::endl<<"The Breed of the dog is : "<<breed<<std::endl<<"The Age of the dog is : "<<*ptr<<std::endl;
}
Dog::~Dog()
{
    delete ptr;
    std::cout<<std::endl;
    std::cout<<"Dog destructor called for : "<<name<<std::endl;
}

int main()
{
    Dog d1("Fluffy","Shepherd",2);
    std::cout<<std::endl;
    Dog d2("Tommy","SiberianHusky",5);
     std::cout<<std::endl;
    Dog d3("Jack","Labrador",3);
     std::cout<<std::endl;
    Dog d4("John","Beagle",7);

}
