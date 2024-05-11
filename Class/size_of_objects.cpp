//Size of class depends on the member variables and not on the functions.

#include <iostream>
class Dog 
{
    public :
    Dog()=default;
    void func1()
    {
        age=age;
    }

    private:
    size_t age;
    size_t age1;
    int *ptr;

};
int main()
{
    Dog d1;
    std::cout<<"Size of (Dog) "<<sizeof(Dog)<<std::endl;
    std::cout<<"Size of (size_t) "<<sizeof(size_t)<<std::endl;
    std::cout<<"Size of (int *)"<<sizeof(int*)<<std::endl;
    std::string name{"Hello World!"};
    std::string name1{"I am the king of the Universe! "};
    std::cout<<"Size of (name)"<<sizeof(name)<<std::endl;
    std::cout<<"Size of (name1)"<<sizeof(name1)<<std::endl;
}
