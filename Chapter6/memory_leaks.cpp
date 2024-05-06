#include <iostream>
int main()
{
    int *ptr {new int {25}};//heap variable , points to address a  
    int number {55};//stack variable
    ptr=&number;//points to address b.
    //now the adress is not accessed to set free .
    //the memory allocated remains unused
    //this is memory leak

    int *ptr1 {new int{50}};//heap variable,points to address a
    ptr1=new int{45};//points to address of 45 in heap memory
    //same as above 

    {
        int *ptr{new int {57}};
    }
    //memory leaked due to nested scopes with dynamically allocated memory  
    
    return 0;
}
