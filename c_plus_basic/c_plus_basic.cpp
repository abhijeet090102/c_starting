// There are two types of header files 
#include<iostream>
// system header files : It comes with the compiler
using namespace std;
// user define header file : It is written by the programmer
// #include "this.h" //This will produce an error if this.h is not present in the current directory

int main()
{
    //prompt user to enter two numbers
    // std is a namespace and :: is the 'scope resolution operator' that allows look-ups for objects by name within a namespace.
    std::cout<<"Enter two numbers :"<<std::endl;
    int v1 = 0,v2 = 0; //variables hold the input we read
    std::cin>>v1>>v2; // read input  >> is called extraction operator
    // << this is a stream insertion operator
    std::cout<<"The multiply of" << v1 << "and" << v2 << "is" << v1 * v2 <<std::endl;
    std::cout<<"*/";
    return 0;
}
