#include <iostream>
int main()
{
    int numbers[] {1,2,3,4,5,6,7,8,9,10};
    std::cout<<"numbers[12] : "<<numbers[12]<<std::endl;

    //compiler allows this however we do not own the memory at ondex 12 so other programs may modif it and program reads 
    //bogus data at a later time or we can even corrupt data by other parts of our program.

    numbers[12999999]=100;
    std::cout<<"numbers[12999999] is : "<<numbers[12999999]<<std::endl;
    //this is going overbound with array limit.
    //cpompiler allows it.
    std::cout<<"Program ending ......";
    //all of this does not get printed.

}
