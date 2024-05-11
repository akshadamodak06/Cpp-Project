#include <iostream>
int main()
{
    int arr[5];
    int arr1[5]={1,2,3};
    int i=0;
    std::cout<<"Printing the values of the array : "<<std::endl;
    for(i;i<5;i++)
    {
        std::cout<<"The value of array arr["<<i<<"] is "<<arr[i]<<std::endl;
    }
    std::cout <<"Certainly these are not the correct values .Input the correct value. "<<std::endl;
    for(i=0;i<5;i++)
    {
        std::cout<<"Enter the value off arr["<<i<<"] :";
        std::cin>>arr[i];
    }
    std::cout<<"Printing the correct values of the array :"<<std::endl;
    for(i=0;i<5;i++)
    {
        std::cout<<"The value of array arr["<<i<<"] is "<<arr[i]<<std::endl;
    }
    
    //Those whom we dont initialise are set to zero and not garbage value.
   for(i=0;i<5;i++)
   {
     std::cout<<"The value of the arr1 ["<<i<<"] is "<<arr1[i]<<std::endl;
   }
//NOT DETERMINING THE size 
int x[] {1,2,3,4,5};
for(auto value : x)
{
    std::cout<<"value : "<<value<<std::endl;
}
  //here the auto keyword is used to automatically deduce the type of elements in the range .we canuse an & just before value. It is optional . x is the conatiner over which the loop iterates .It can be array a container(like std::vector or std::list)
  //The loop handles the details of accessing elements in the range,eliminating the need for manual index management.
const int arr2[5]={1,2,3,4,5};
 // arr2[3]=100; shows an error .

int arr3[5],sum=0;
std::cout<<"Enter the values of array: "<<std::endl;
for(i=0;i<5;i++)
{
   std::cout<<"The value of arr3["<<i<<"] is :";
   std::cin>>arr3[i];
   sum+=arr3[i];
} 
std::cout<<"The sum of the array is "<<sum;
}
