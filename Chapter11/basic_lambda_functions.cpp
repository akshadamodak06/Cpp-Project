#include <iostream>
/* Lambda function signature:
    
   [capture list](parameters)->return type {
    //Function body
   }

*/

int main()
{
    std::cout<<"Declare a lambda function and call it directly."<<std::endl;
    [](){
        std::cout<<"Hello World!"<<std::endl;
    }();
    
    std::cout<<std::endl;

    std::cout<<"Assigning a function it to a variable"<<std::endl; 
    auto func=[](){
    std::cout<<"Hello World!"<<std::endl;
    };
    func();
    func();
    std::cout<<std::endl;

    std::cout<<"Lambda function that takes parameters and calling it directly : "<<std::endl;
    [](int a,int b){
        std::cout<<"a+b = "<<a+b<<std::endl;
    }(2,3);
    std::cout<<std::endl;

    std::cout<<"Lambda function that takes parameters and is assigned to a variable ."<<std::endl;
    auto func1= [](int a,int b){
        std::cout<<"a+b = "<<a+b<<std::endl;
    };
    func1(3,78);
    func1(34,65);
    std::cout<<std::endl;

    std::cout<<"Lambda function with returns value called directly. "<<std::endl;
    [](double a1,double b1){
        std::cout<<"a-b = "<<a1-b1<<std::endl;
    }(23.567,98.5773);
    std::cout<<std::endl;

    std::cout<<"Lambda function with returns value assigned to a variable."<<std::endl;
    auto result= [](double a2,double b2){
        return a2*b2;
    };
    result(34.778,45.669);
    std::cout<<std::endl;

    std::cout<<"result : "<<[](double a2,double b2){
        return a2*b2;
    }(34,0)<<std::endl;

    auto func2=[](double a2,double b2){
        return a2/b2;
    };
    auto result1 = func2(9,3);
    auto result2 = func2(458567,7);
    std::cout<<"result1 : "<<result1<<std::endl;
    std::cout<<"result2 : "<<result2<<std::endl;
    std::cout<<"direct call : "<<func2(12435,13)<<std::endl;
    std::cout<<std::endl;

    std::cout<<"Explicitly specify the return type : "<<std::endl;
    auto func3=[](double a,double b) ->int
    {
        return a+b;
    };
    auto func4=[](double a,double b) 
    {
        return a+b;
    };
    double a{6.9},b{3.5};

    std::cout<<"Result is : "<<func3(a,b)<<std::endl;
    std::cout<<"Result is also : "<<func4(a,b)<<std::endl;
    std::cout<<"Size of previous result is : "<<sizeof(func3(a,b))<<std::endl;
    std::cout<<"Size of the later result is : "<<sizeof(func4(a,b))<<std::endl;
    std::cout<<std::endl;
    return 0;
}
