#include<iostream>
using namespace std;

int fibo(int am){
    if(am<=1){
        return 1;
    }
    return fibo(am-2) + fibo(am-1);
}
// int factorial(int am){
//     if(am<=1){
//         return 1;
//     }
//     return am*factorial(am-1);
// }
int main(){
    // factorial of a number
    // 6! = 6*5*4*3*2*1 = 720 
    // 0! = 1 by defination
    // 1! = 1 by defination
    // n! = n*(n-1);
    int st;
    cout<<"Enter a number "<<endl;
    cin>>st;
    // cout<<"The factorial of "<< st << " is :"<<factorial(st)<<endl;
    cout<<"The term in fibonacci sequence at position "<< st << " is :"<<fibo(st)<<endl;
    return 0;
}