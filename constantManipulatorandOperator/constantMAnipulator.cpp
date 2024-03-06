#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    // int am = 16;
    // cout<<"the Value of am was:" <<am<<endl;
    // am = 18;
    // cout<<"The value of am is :" << am <<endl;
    // ****************Constant in C++******************
    // const int am = 4;
    // cout<<"The value of am was :"<<am << endl;
    // am = 6; // This shows an error because a is a constant
    // cout<<"The value of am is :"<<am << endl;

    // ***************MAnipulator in c++**************
    // int a = 9 , m = 16 , st = 25;
    // cout << "The value of a without setw is: "<<a<<endl;
    // cout << "The value of m without setw is: "<<m<<endl;
    // cout << "The value of st without setw is: "<<st<<endl;

    // cout << "The value of a with setw is: "<<setw(4)<<a<<endl;
    // cout << "The value of m with setw is: "<<setw(4)<<m<<endl;
    // cout << "The value of st with setw is: "<<setw(4)<<st<<endl;
    
    // *****************Operator Precedence*****************
    int a = 4 , m = 5;
    // int st = (a*5)+m; 
    /*  a*b   a/b   a%b	----> Multiplication, division, and remainder  // associativity --> left to right
    // a+b   a-b	Addition and subtraction // associativity --> left to right  */
    int st = ((((a*5)+m)-20)+12);
    cout<<st;
    return 0;
}