#include<iostream>
using namespace std;

int main(){
    // what is a Pointer --> data type which holds the address of other data type
    int a = 4;
    int* b = &a;  // & --> Address of operator  
    cout<<"The address of a is :"<<&a<<endl;
    cout<<"The address of a is :"<<b<<endl;

    //* --> (vlaue at) Dereference operator
    cout<<"The value at address of b is :"<<*b<<endl;

    // pointer to pointer
    int** c = &b;
    cout<<"The value of b is :"<<&b<<endl;
    cout<<"The value of c is :"<<c<<endl;
    cout<<"The value at address c is :"<<*c<<endl;
    cout<<"The value at address value at (value at(c)) is :"<<**c<<endl;
    return 0;
}