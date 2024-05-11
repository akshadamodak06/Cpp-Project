//They are special methods are called automatically when an object dies.
//They are needed when the object needs to release some dynamic memory,or for some other kind of clean up.
//They are called when an object is passed by value to a function.
//They are called when a local object is returned from a function.
//oBvious cases when it is called;
//1.When a local stack object goes out of scope 
//2.When a heap object is released with delete.
//Destructors have no parameters in c++
//The compiler automatically generate a default destructor even though not defuned 
//if our class requires specail handling (like dynamically allocated memory or file handles )we might need to provide a cutsom destructor to ensure proper cleanup
//Destructor will always be executed after the object goes out of scope or is explicitly deleted using the delete keyword .
//t is responsible for cleaning up resources held by the object such as dealloacting memory or closing files.

 


#include <iostream>
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
void some_func()
{
    Dog d2("Tommy","SiberianHusky",5);
}
void some_func1()
{
    Dog *d=new Dog("Jack","Labrador",3);
    delete d;//If we do not write this command the destructor block is not executed
    //This is because when we dynamically allocate memory that is heap memory,
    //we need to write the delete command to let the pointer unpoint whatever it was pointing initially 
    //to free up the space .
}


int main()
{
     Dog d1("Fluffy","Shepherd",2);
     std::cout<<std::endl;
     std::cout<<"Calling object through function : "<<std::endl;
    some_func();
    std::cout<<std::endl;
    std::cout<<"Calling object using pointer from a function : "<<std::endl;
    some_func1();
    std::cout<<"Done!!!"<<std::endl;
    return 0;
}
//The above program proves that a constructor and destructor are always ececuted even if they are not defined or they are not called in the main function while dealing with an object .
