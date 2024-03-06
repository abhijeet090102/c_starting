#include<iostream>
using namespace std;

class point {
    int a , m;
    public: 
        point(int am , int st){
        a = am;
        m = st;
    }
    void displayPoint(){
        cout<<"The point is ("<< a <<" , " << m <<")" <<endl ;
    }

};
// create a function which takes 2 point objects and computes the distance bwtween those points
int main(){
    point ma(1,4);
    ma.displayPoint();
    point amst(6,4);
    amst.displayPoint();
    return 0;
}