//multilevel inheritance
/*If we are inheriting A->B->C
1.A is the base class for B and B is the base class for C
2.A->B->C is called the inheritance path.
*/
#include<iostream>
using namespace std;

class Student 
{
    protected :
    int id;
    public:
    void setid(int);
    int getid(void);
};

void Student :: setid( int i)
{
    id=i;
}
int Student :: getid()
{
    return id;
}
class Exam:public Student
{
    protected:
    float physics;
    float maths;
    public:
    void setdm(float,float);
    float getdmp(void);
    float getdmm(void);
};

void Exam :: setdm(float m,float p)
{
    physics=p;
    maths=m;
}

float Exam ::getdmp()
{
    return physics;

}
float Exam::getdmm()
{
    return maths;
}

class Subject: public Exam
{
    protected:
    float percentage;
    public:
    float display();
    void get(float p1)
    {
        percentage=p1;
        cout<<"Your percentage are : "<<percentage<<endl;
    }
    void getinfunc(float maths1,float physics1)
    {
        maths=maths1;
        physics=physics1;
        cout<<"Your marks in maths and physics are "<<maths <<" and "<<physics<<" respectively ."<<endl;

    }
};

float Subject::display()
{
    return percentage;
}

int main()
{
    Exam e;
    Subject s;
    Student st;
    st.setid(202301485);
    cout<<"Your roll number is : "<<st.getid()<<endl;
    e.setdm(34.5,35.67);
    cout<<"Your marks in maths are : "<<e.getdmm()<<endl;
    cout<<"Your marks in physics are : "<<e.getdmp()<<endl;
    s.get(92.99);
    s.getinfunc(90,95);
    return 0;
}
