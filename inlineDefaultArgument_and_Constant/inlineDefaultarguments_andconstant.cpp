#include<iostream>
using namespace std;

inline int product(int a , int m){
    return a*m;
}
// int product(int a , int m){
//     static int st = 0; // one time intialization value retain this executes only once
//     st = st +1; // next time this function is run , the value of c will be retained
//     return a*m+st;
// }

float moneyReceived(int currentMoney , float factor = 1.04){
    return currentMoney*factor;
}
// int strlen(const char* p){
    
// }
int main(){
    // int a, m;
    // cout<<"Enter the vlaue of a and m "<<endl;
    // cin>>a>>m;
    // cout<<"The product of a and m is "<<product(a,m)<<endl;
    int money = 100000;
    cout<<"If you have "<<money <<"Rs in your bank account , you will receive "<<moneyReceived(money)<<"Rs after 1 year "<<endl;
    cout<<"For VIP : If you have "<<money <<"Rs in your bank account , you will receive "<<moneyReceived(money , 1.10)<<"Rs after 1 year "<<endl;
    return 0;
}