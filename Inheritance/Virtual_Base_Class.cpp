//Virtual Base Class
/*
student->test
student->sports
sports+test->result
*/
//not writing virtual creates ambiguity
#include <iostream>
using namespace std;
class Student 
{
    protected:
    int id;
    public:
    void sets(int a)
    {
        id=a;
    }
    void print1()
    {
        cout<<"Your id is : "<<id<<endl;
    }

};
class Test: virtual public Student
{
    protected :
    float maths ,physics;
    public:
    void sett(float m,float p)
    {
        maths =m;
        physics=p;
    }
    void print2()
    {
        cout<<"Your Result is : "<<endl<<"Maths :"<<maths<<endl<<"Physics : "<<physics << endl;
    }

};
class Sports: virtual public Student
{
    protected:
    float score;
    public:
    void setsp(float sc)
    {
        score=sc;
    }
    void print()
    {
        cout<<"Your pt score is : "<<score<<endl;
    }


};
class Result : public Test,public Sports
{
    private :
    float total;
    public:
    void display()
    {
        total=maths + physics + score;
        print1();
        print2();
        print();
        cout<<"Your final result is :  "<<total<<endl;
    }
};


int main()
{
    Result r;
    r.display();
    Result r1;
    r1.sets(23);
    r1.sett(34.5,34.67);
    r1.setsp(56);
    r1.display();
    return 0;
}
