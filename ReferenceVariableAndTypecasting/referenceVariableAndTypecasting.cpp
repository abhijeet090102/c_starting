#include<iostream>
using namespace std;

int c = 16;
int main(){
    //************Built in data types******************
    // int a , b, c;
    // cout<<"Enter the value of a:" <<endl;
    // cin>>a;
    // cout<<"Enter the value of b:" <<endl;
    // cin>>b;
    // c = a + b;
    // cout<<"The sum of a + b is :" << c <<endl;
    // cout<<"The global c is :"<< ::c ; // scope resolution operator '::' use for global value print

    //************Float , double , long double Literals ******************
    // float st = 16.9f;
    // long double e = 34.5L;
    // 34.6 by default the decimal  type number is double 
    // 34.6f now it is a float type number
    // cout<< "The size of 34.5 is "<<sizeof(34.5) <<endl;
    // cout<< "The size of 34.5f is "<<sizeof(34.5f) <<endl;
    // cout<< "The size of 34.5F is "<<sizeof(34.5F) <<endl;
    // cout<< "The size of 34.5l is "<<sizeof(34.5l) <<endl;
    // cout<< "The size of 34.5L is "<<sizeof(34.5L) <<endl;
    // cout << "The value of st is :" << st << endl << "The value of e is :"<< e <<endl;

    // ************** Reference variables **************
    // Abhijeet ----> Sontu ----> Sona ----> CoderAbhi 
    // float am = 466;
    // float & st = am;
    // cout<<am<<endl;
    // cout<<st<<endl;
    
    //***************Typecasting***************
    int am = 40;
    float st = 36.16;
    cout<< "The value of am is :" <<(float)am << endl;
    cout<< "The value of am is :" <<float(am) << endl;

    cout<< "The value of st is :" <<(int)st <<endl;
    cout<< "The value of st is :" <<int(st)<<endl;
    int amst = int(st);
    cout<< "The value of amst is :" << int(amst) << endl;

    cout<< "The expression is "<<am+st<<endl;
    cout<< "The expression is "<<am+ int(st)<<endl;
    cout<< "The expression is "<<am+ (int)st<<endl;

    return 0;
}