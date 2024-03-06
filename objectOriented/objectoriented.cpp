#include<iostream>
using namespace std;

class amployee
{
    private:
        int a , m ;
    public:
        int s , t;
        void setdata(int a1,int m1); // Declaration
        void getdata(){
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of m is "<<m<<endl;
            cout<<"The value of s is "<<s<<endl;
            cout<<"The value of t is "<<t<<endl;
        }
};
void amployee :: setdata(int a1 , int m1){
    a = a1;
    m = m1;
}
int main(){
    amployee abhijeet;
    abhijeet.s=9;
    abhijeet.t=16;
    abhijeet.setdata(1,2);
    abhijeet.getdata();
    return 0;
}