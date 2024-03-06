#include<iostream>
using namespace std;
//function prototype   type function-name (arguments);
// int stam(int a , int b);
// int stam(int a , b); // --> not acceptable
int stam(int , int ); // Acceptable
void g( void );

int main(){
    int nam1 , nam2 ;
    cout<<"Enter first number"<<endl;
    cin>>nam1;
    cout<<"Enter second number"<<endl;
    cin>>nam2;
    g();
    //nam1 and nam2 are actual parameters 
    cout<<"The sum is "<<stam(nam1 , nam2)<<endl;
    return 0;
}

int stam(int a , int m){
    // Formal Parameters a and m will be taking vlaues from actual parameters nam1 and nam2
    int st = a+m;
    return st;
}
void g(){
    cout<<"Namaskar , Good Morning"<<endl;
    return ;
}