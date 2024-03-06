#include<iostream>
using namespace std;

typedef struct employee
{
    /* data */
    int eId; //4
    char favCar; //1
    float salary; //4
}Ep;


union money
{
    /* data for better mamory management */
    int rice; //4
    char car; //1
    float pounds; //4 maximum size will be alocate and we use only one variable
};


int main(){
    enum mael {breakfast , lunch , dinner};
    mael m1 = breakfast;
    cout<<m1<<endl;
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;

    union money ma;
    ma.rice = 36;
    ma.car = 'M';
    cout<<ma.car<<endl;

    Ep Abhijeet;
    Ep Manisha;


    Abhijeet.eId = 34;
    Abhijeet.favCar = 'M';
    Abhijeet.salary = 140000;
    cout<<"Fav person first latter is :"<<Abhijeet.favCar<<endl;
    cout<<"Salary is :"<<Abhijeet.salary<<endl;
    cout<<"Employee id is :"<<Abhijeet.eId<<endl;
    return 0;
}