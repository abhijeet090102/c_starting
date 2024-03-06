// There are two types of header files 
#include<iostream>
// system header files : It comes with the compiler
using namespace std;
// user define header file : It is written by the programmer
// #include "this.h" //This will produce an error if this.h is not present in the current directory
int main(){
    int a = 4 , b = 6;
    cout<<"operators in c++"<<endl;
    cout<<"following are the types of operators in c++"<<endl;
    // Arithmetic operators
    cout << "The value of a+b is " << a+b << endl;
    cout << "The value of a - b is " << a - b << endl;
    cout << "The value of a * b is " << a * b << endl;
    cout << "The value of a / b is " << a / b << endl;
    cout << "The value of a % b is " << a % b << endl;
    cout << "The value of a ++ is " << a++ << endl;
    cout << "The value of a-- is " << a-- << endl;
    cout << "The value of --a is " << --a << endl;
    cout << "The value of ++a is " << ++a << endl;
    cout<<"\n";

// asignment operator
// int a =4,b=9;
// char d = 'a';

// comparision operator
    cout<<"following are the comparision operators in c++"<<endl;
    cout<<"The value of a == b is :" << (a==b)<<endl;
    cout<<"The value of a > b is :" << (a>b)<<endl;
    cout<<"The value of a < b is :" << (a<b)<<endl;
    cout<<"The value of a >= b is :" <<( a>=b)<<endl;
    cout<<"The value of a <= b is :" << (a<=b)<<endl;
    cout<<"The value of a != b is :" << (a!=b)<<endl;

// logical operator
    cout<<"following are the Logical operators in c++"<<endl;
    cout<<"The value of logical AND operator ((a==b) && (a>b))  is :" << ((a==b) && (a>b))<<endl;
    cout<<"The value of logical OR operator ((a==b) || (a<b))  is :" << ((a==b) || (a<b))<<endl;
    cout<<"The value of logical NOT operator ( ! (a==b) )  is :" << (!(a==b) )<<endl;
    return 0;
}