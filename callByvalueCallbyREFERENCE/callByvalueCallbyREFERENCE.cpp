#include<iostream>
using namespace std;

int am(int a , int m){
    int st = a+m;
    return st;
}
// this will not swap values
void st(int a , int m){
    int temp = a;
    a = m;
    m = temp;
}
// call by reference using pointers
void stPointer(int* a , int* m){
    int temp = *a;
    *a = *m;
    *m = temp;
}
// call by reference using c++ reference variables
// void amPointerVar(int &a , int &m){
//     int temp = a;
//     a = m;
//     m = temp;
// }
int & amPointerVar(int &a , int &m){
    int temp = a;
    a = m;
    m = temp;
    return a;
}
int main(){
    int a = 4 , m = 5;
    cout<<"The sum of 4 and 5 is "<<am(a,m)<<endl;
    cout<<"The value of a is "<< a << "and the value of m is "<<m<<endl;
    //st(a ,m);// this will not swap values
    // stPointer(&a , &m); // this will swap values using pointers reference
    // amPointerVar(a , m); // this will swap values using reference variables
    amPointerVar(a , m) = 48; // this will swap values using reference variables
    cout<<"The value of a is "<< a << "and the value of m is "<<m<<endl;

    return 0;
}