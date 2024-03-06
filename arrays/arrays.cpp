#include<iostream>
using namespace std;

int main(){
    int marks[] = {24 , 40 , 44 , 28};

    /* int mathMarks[2] ;
    mathMarks[0] = 38;
    mathMarks[1] = 87;
    // Value declared also after declare of array
    cout<<mathMarks[0]<<endl;
    cout<<mathMarks[1]<<endl;*/

    /*printing using loop 
     cout<<marks[0]<<endl;
     cout<<marks[1]<<endl;
     for(int i=0; i<2; i++){
         cout<<"The value of marks "<< i <<" is :"<<marks[i]<<endl;
     }*/

    /*quiz : do the same using while and do-while loops
    int i = 0;
    while(i<2){
        cout<<"The value of marks "<< i <<" is :"<<marks[i]<<endl;
        i++;
    }
    do{
        cout<<"The value of marks "<< i <<" is :"<<marks[i]<<endl;
        i++;
    } while(i<2);*/

    // pointer and arrays in C++ arithmetic
    // address new(p++) = add current(p) + i * sizeof(data type) 
    
    int* p = marks;
    cout<<*(p++)<<endl;
    cout<<*(++p)<<endl;
    // cout<<"The value of *p is :"<< *p <<endl;
    // cout<<"The value of *(p+1) is :"<< *(p+1) <<endl;
    // cout<<"The value of *(p+2) is :"<< *(p+2) <<endl;
    // cout<<"The value of *(p+3) is :"<< *(p+3) <<endl;
    return 0;
}