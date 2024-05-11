#include<iostream>
int main()
{
   int x {20},y {35}; 
   int result;
   
   result = (x>y)?x:y;
   auto max = (x>y)?'a':22.5;
   auto min= (x<y)?89.5:'b';
   auto charachter= (x<y)?'a':'b';

   std::cout<<"The result is: "<<result<<std::endl<<"The max is " <<max<<std::endl<<"The min is "<<min<<std::endl<<"The character is "<<charachter<<std::endl;
   return 0;
}
