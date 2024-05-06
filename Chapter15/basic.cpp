//default visibility mode is private
//Private visibility mode: Public members of the base class becomes private members of the derived class
//Public visibility mode: Public members of the base class becomes public members of the derived class
//Private members of base class can never be inherited .
 

#include <iostream>
using namespace std;

class Employee
{
    public:
    int id;
    float salary;
    Employee(int inp)
    {
        id=inp;
        salary = 34;
    }
    Employee()=default;//we need to write this mandatory as whenever Programmer class is accessed ,the Employeeclass is accessed and
    //hence the compiler looks frward to make a default constructor class which cpuld not be formed as constructor is already present with parameters.
    //the complier requires a default constructor as when we access from derived class we do not write any parameters for the base class.

};

class Programmer:public Employee
{
    public:
    int languageCode =9;
    Programmer (int inp)
    {
        id=inp;
    }


};
int main()
{
    Employee a,b;
    cout<<a.salary<<endl;
    cout<<b.salary<<endl;
    Programmer p1(1);
    
    return 0;

}


