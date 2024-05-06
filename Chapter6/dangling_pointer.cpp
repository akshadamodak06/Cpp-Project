//dangling pointers have undefined behaviour 
//three types of dangling pointers
#include <iostream>
int main()
{
    //first type is uninitialised pointer
    int *ptr;
    std::cout<<"Unintialise pointer : \n"<<std::endl;
    std::cout<<"value at pointer : "<<*ptr<<std::endl;
    std::cout<<"address stored in the unitialised pointer : "<<ptr<<std::endl;
    
    //second type is deleted pointer

    std::cout<<std::endl;
    std::cout<<"Deleted pointer : "<<std::endl;
    int *ptr1 {new int {25}};
    std::cout<<"number(before delete) : "<<*ptr1<<std::endl;
    delete ptr1;
    std::cout<<"number(after delete) : "<<*ptr1<<std::endl;
    //undefined behaviour : crash/garbage 


    //third type is multiple pointers pointing to the same address

    std::cout<<std::endl;
    std::cout<<"Multiple pointers pointing at the same address : "<<std::endl;
    int *ptr2 {new int {24}};
    int *ptr3 {ptr2};

    std::cout<<"number : "<<*ptr2<<" - "<<"address : "<<ptr2<<std::endl;
    std::cout<<"number : "<<*ptr3<<" - "<<"address : "<<ptr3<<std::endl;

    delete ptr2;

    //ptr3 now points to deleted memory.derefrencing it will lead to
    //undefined behaviour :crash /garbage

    std::cout<<"number : "<<*ptr3<<" - "<<"address : "<<ptr3<<std::endl;

    //solutions
    //initialize your pointers
    //reset pointers after delete 
    //for multiple pointe to same address , make sure the owner pointer is very clear

    














}
