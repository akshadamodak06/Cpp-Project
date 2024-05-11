//the coder can control the lifetime of the memory, such data is placed in heap memory
//in stack memory we cant control the scope of variable .
//heap memoory is uesd in a program when additional space is required 
//in stack memory the lifetime of the variable is predefined 
//i.e until the next closed curly brace is not introuced
//the coder can himself store a variable in the heap memory 
//that is why the lifetime o fthe variable is controllable
//all the local varibables or functions get stored in the stack memory by default
//hence  lidetime in stack memory is controled by scope mechanism and the lifetime in the heap memory is controlled explicitly controlled through new and delete operators

#include<iostream>

int main()
{
    //using stack memory to allocate pointer
    int number {22};
    int *ptr1=&number;
    std::cout<<"Declaring pointer and assigning address  : "<<std::endl;
    std::cout<<"number : "<<number<<std::endl;
    std::cout<<"address of number : "<<ptr1<<std::endl;

    int *ptr2;//unintialised pointer , contains junk address
    int number1 {12};
    ptr2=&number1;
    std::cout<<"Unintialised Pointer : "<<std::endl;
    std::cout<<"number : "<<*ptr2;

    int *ptr3;//unitialised pointer , conatains junk address
    int number2 {23};
   /* *ptr3=number2;
    //no output after this. unhealthy practice
    std::cout<<"Unitialised pointer : "<<std::endl;
    std::cout<<"number : "<<*ptr3<<std::endl;
    std::cout<<"number address : "<<&number2<<std::endl;
    std::cout<<"address stored in the pointer : "<<ptr3<<std::endl;
  */
   
   //using heap memory allocate pointer

   int *ptr4{nullptr};
   ptr4= new int;
   //dynamically allocate space for a single int on the heap
   *ptr4 = 77;
   std::cout<<std::endl;
   std::cout<<"Dynamically allocating memory : "<<std::endl;
   std::cout<<"*ptr4 : "<<*ptr4<<std::endl;

   delete ptr4;//deallocates memory that was allocated by new.
   ptr4=nullptr;//good practice

   int *ptr5{new int};
   int *ptr6{new int {25}};
   int *ptr7{new int (50)};

   std::cout<<std::endl;
   std::cout<<"Initialise with valid memory at declaration :"<<std::endl;
   std::cout<<"number5 : "<<*ptr5<<std::endl;
   std::cout<<"address of number5 : "<<ptr5<<std::endl;
   std::cout<<"number6 : "<<*ptr6<<std::endl;
   std::cout<<"address of number6 : "<<ptr6<<std::endl;
   std::cout<<"number7 : "<<*ptr7<<std::endl;
   std::cout<<"address of number7 : "<<ptr7<<std::endl;

   delete ptr5;
   ptr5=nullptr;
   delete ptr6;
   ptr6=nullptr;
   delete ptr7;
   ptr7=nullptr;

   //we can reuse the pointer 
   std::cout<<"Reusing pointer : "<<std::endl;
   ptr5=new int(81);
   std::cout<<"ptr5 : "<<*ptr5<<std::endl;

   delete ptr5;
   ptr5=nullptr;

   std::cout<<"calling delete twice on a pointer : unhealthy practice "<<std::endl;
   ptr5=new int(81);
   std::cout<<"ptr5 : "<<*ptr5<<std::endl;
   delete ptr5;
   delete ptr5;//ideally code terminattes here.
   ptr5=nullptr;
   
   return 0;
}


