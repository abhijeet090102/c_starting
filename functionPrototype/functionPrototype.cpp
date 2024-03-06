#include<iostream>
void foo(int); // prototype declaration of foo , seen by main
// Must specify return type , name , and argument list type
int main(){
    foo(2);
    return 0;
}
void foo(int am)// must match the prototype 
{
    std::cout<< am << std::endl;
    return;
}