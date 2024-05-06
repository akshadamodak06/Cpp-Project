#include <iostream>
#include <string>

int main()
{
    //one of the advantages of using std::string is that whenever we store more elements than the defined size it allows it 
    //however in normal arrays it does not allow.array out of bounds!!!
    std::string name;//empty string
    std::string planet {"Earth ,where the sky is blue"};//initialize with string literal
    std::string planet1{planet};//initialise with other existing string
    std::string message {"Hello there",5};//initialise with part of a string literal
                                //contains hello
    std::string message1 (4,'e');//initialises with multiple copier of a charachter
                                //contains eeee
    std::string greeting {"Hello there. What are you doing?"};
    std::string message2{greeting ,12};
     std::string message3{greeting ,12,5};//initialise with part of an existing std::string
                                    //starting at index 6 ,taking 5 charachters.
    std::cout<<"Name : "<<name<<std::endl;
    std::cout<<"Planet : "<<planet<<std::endl;
    std::cout<<"Planet1 : "<<planet1<<std::endl;
    std::cout<<"Message : "<<message<<std::endl;
    std::cout<<"Message1 : "<<message1<<std::endl;
    std::cout<<"Greeting : "<<greeting<<std::endl;
    std::cout<<"Message2 : "<<message2<<std::endl;
    std::cout<<"Message3 : "<<message3<<std::endl;
 
    return 0; 
}
