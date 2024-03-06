#include<iostream>
using namespace std;

//1 + 4i
//5 + 4i == 6 + 8i
class complex{
    int a , m;
    public:
        void setNum(int t , int s){
            a = t;
            m = s;
        }
        // below line means that non member - sumComplex function is allowed to do anything with private values (data)
        friend complex sumComplex(complex o1 , complex o2);
        void printNumber(){
            cout<<"Your number is "<<a<<" + "<<m<<"i"<<endl;
        }
};
complex sumComplex(complex o1 , complex o2){
    complex o3;
    o3.setNum((o1.a + o2.a),(o1.m + o2.m));
    return o3;
}
int main(){
    complex m1 , m2 , sum;
    m1.setNum(1,4);
    m2.setNum(5,8);

    m1.printNumber();
    m2.printNumber();

    sum = sumComplex(m1 , m2);
    sum.printNumber();
    return 0;
}

/*Properties of friend functions
1.Not is the scope of the class
2.since it is not in the scope of the class , it cannot be called from the object of that class.m1.sumComplex() = Invalid
3.Can be invoked without the help of any object
4.Usually contains the objects as arguments 
5. can be declared inside public or private section of the class
6.It cannot access the members directly by their names and need object_name.member_name to access any member 

*/
