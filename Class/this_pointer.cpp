//Each class member function contains a hidden pointer called 'this'
//That pointer contains the address of the current object , for which the method is being executed.
//applies to constructors and destructors 
#include<iostream>
class Dog
{
    public:
    Dog()=default;
    Dog(std::string s1,std::string s2,int n);
    ~Dog();

    //Setters
    void print()
    {
        std::cout<< "Dog ()"<<this <<") : [name : "<<name<<" breed : "<<breed <<" age : "<<*ptr <<"]"<<std::endl;

    }
    Dog* setd1(std::string name)
    {
       // if we write this statement
       // name=name;
       //the compiler raises no issue however the namealso does not change
       this->name=name;
       return this;
       //changes the name 
       //earlier the compiler was confused because of the same names
       //by pointing this 
    }
    Dog* setd2(std::string breed)
    {
        this->breed=breed;
        return this;
    }
    Dog* setd3(int p)
    {
        *(this->ptr)=p;
        return this;
    }
    /*
    Chained call using references
    Dog& setd1(std::string name)
    {
       // if we write this statement
       // name=name;
       //the compiler raises no issue however the namealso does not change
       this->name=name;
       return *this;
       //changes the name 
       //earlier the compiler was confused because of the same names
       //by pointing this 
    }
    Dog& setd2(std::string breed)
    {
        this->breed=breed;
        return *this;
    }
    Dog& setd3(int p)
    {
        *(this->ptr)=p;
        return *this;
    }
    */
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
    std::cout<<"Dog constructor called for : "<<name<<"at "<<this<<std::endl<<"The Breed of the dog is : "<<breed<<std::endl<<"The Age of the dog is : "<<*ptr<<std::endl;
}
Dog::~Dog()
{
    delete ptr;
    std::cout<<std::endl;
    std::cout<<"Dog destructor called for : "<<name<<" at "<<this<<std::endl;
}


int main()
{
    Dog d ("Fluffy","Shepherd",2);
    d.print();
    d.setd1("Pumba");
    d.print();
    d.setd2("GoldenRetriever");
    d.print();
    d.setd3(4);
    d.print();

    std::cout<<"Changing the data through link : "<<std::endl;
    d.setd1("Daisy")->setd2("pitbull")->setd3(5);
    d.print();

    /*
    Chained call using reference
    dog1.setd1("Daisy").setd2.("pitbull").setd3(5);
    */

    return 0;
}

