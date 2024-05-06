#include<iostream>
int main()
{
    int d {45},e {20},f{11},a {true};
    std::cout <<std::endl;
    std::cout << "d : "<<d<<std::endl;
    std::cout << "e : "<<e<<std::endl;
    std::cout << "f : "<<f<<std::endl;
    std::cout<<std::endl;
    std::cout<<"(d > e) && (d > f) : "<<((d > e) && (d > f))<<std::endl;
     std::cout<<"(d == e) && (e <= f) : "<<((d == e) && (e<= f))<<std::endl;
      std::cout<<"(d < e) && (d > f) : "<<((d < e) && (d > f))<<std::endl;
       std::cout<<"(f > e) && (d < f) : "<<((f > e) && (d < f))<<std::endl;
        std::cout<<"(d > f) && (f <= d) : "<<((d > f) && (f<=d))<<std::endl;
         std::cout<<"(d > e) && (d <= f) : "<<((d > e) && (d <= f))<<std::endl;
          std::cout<<"(!a) && (d == e) : "<<((!a) && (d == e))<<std::endl;
    std::cout<<std::endl;
    std::cout<<std::boolalpha;
     std::cout<<"(d > e) && (d > f) : "<<((d > e) && (d > f))<<std::endl;
     std::cout<<"(d == e) && (e <= f) : "<<((d == e) && (e<= f))<<std::endl;
      std::cout<<"(d < e) && (d > f) : "<<((d < e) && (d > f))<<std::endl;
       std::cout<<"(f > e) && (d < f) : "<<((f > e) && (d < f))<<std::endl;
        std::cout<<"(d > f) && (f <= d) : "<<((d > f) && (f<=d))<<std::endl;
         std::cout<<"(d > e) && (d <= f) : "<<((d > e) && (d <= f))<<std::endl;
          std::cout<<"(!a) && (d == e) : "<<((!a) && (d == e))<<std::endl;

}
