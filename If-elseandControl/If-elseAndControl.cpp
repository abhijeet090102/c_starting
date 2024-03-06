#include<iostream>
using namespace std;
int main(){
    // basic control structure
    //1. sequence structure 2. selection structure 3. loop structure 
    // sequence structure --> entry --> action 1 --> action 2 --> exit
    // selection structure --> entry --> condition ( true / false ) a1 or a2 --> exit 
    // loop structure --> entry --> condition ture/false --> t action1 again check condition --> f action 2 exit
    // if-else statement
    // if-else ladder
    //switch case switch(expression){case1 :{ action1 } case2:{ action2}}

    //**********selection control structure  if - else ladder************
    // cout<<"This is control and if-else and switch-case statement"<<endl;
    // int age ;
    // cout<<"Tell me your age:"<<endl;
    // cin>>age;
    // if((age<18)&& (age > 0)){
    //     cout<<"Your age is not sufficient to our party criteria "<<endl;
    // }
    // else if(age==18){
    //     cout<<"You are a kid and you will get a kid pass to the party"<<endl;
    // }
    // else{
    //     cout<<"You can come to the party"<<endl;
    // }

    //**********selection control structure  switch case statement ************
    int age;
    cin>>age;
    switch(age){
        case 18:{
            cout<<"You are 18" <<endl;
            break;
        }
        case 22: {
            cout<<"You are 22 " <<endl;
            break;
        }
        case 2: {
            cout<<"You are now 2 , you're a kid" <<endl;
            break;
        }
        default:{
            cout<<"No special cases"<<endl;
        break;}
    }
    return 0;
}