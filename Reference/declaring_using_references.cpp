#include <iostream>
int main()
{
    int num1 {10};
    double num2 {20};

    //References
    int &x{num1};
    double &y{num2};

    std::cout<<"Value of num1 : "<<num1<<std::endl;
    std::cout<<"Address of num1 : "<<&num1<<std::endl;
    std::cout<<"Value of num2 : "<<num2<<std::endl;
    std::cout<<"Address of num2 : "<<&num2<<std::endl;
    std::cout<<std::endl;

    std::cout<<"Using References"<<std::endl;
    std::cout<<"Value of num1 : "<<x<<std::endl;
    std::cout<<"Address of num1 : "<<&x<<std::endl;
    std::cout<<"Value of num2 : "<<y<<std::endl;
    std::cout<<"Address of num2 : "<<&y<<std::endl;
    std::cout<<std::endl;

    std::cout<<"Changing value of original variables to see if reference picks it up : "<<std::endl;
    num1=45;
    num2=55;
    std::cout<<"Value of num1 : "<<num1<<std::endl;
    std::cout<<"Address of num1 : "<<&num1<<std::endl;
    std::cout<<"Value of num2 : "<<num2<<std::endl;
    std::cout<<"Address of num2 : "<<&num2<<std::endl;
    std::cout<<std::endl;

    std::cout<<"Using References"<<std::endl;
    std::cout<<"Value of num1 : "<<x<<std::endl;
    std::cout<<"Address of num1 : "<<&x<<std::endl;
    std::cout<<"Value of num2 : "<<y<<std::endl;
    std::cout<<"Address of num2 : "<<&y<<std::endl;
    std::cout<<std::endl;

    std::cout<<"Changing value of reference variables to see if original value changes : "<<std::endl;
    x=675;
    y=1000;
    std::cout<<"Value of num1 : "<<num1<<std::endl;
    std::cout<<"Address of num1 : "<<&num1<<std::endl;
    std::cout<<"Value of num2 : "<<num2<<std::endl;
    std::cout<<"Address of num2 : "<<&num2<<std::endl;
    std::cout<<std::endl;

    std::cout<<"Using References"<<std::endl;
    std::cout<<"Value of num1 : "<<x<<std::endl;
    std::cout<<"Address of num1 : "<<&x<<std::endl;
    std::cout<<"Value of num2 : "<<y<<std::endl;
    std::cout<<"Address of num2 : "<<&y<<std::endl;
    std::cout<<std::endl;

    //This happens because we are modifying data in the same memory location .








    return 0;    
}
