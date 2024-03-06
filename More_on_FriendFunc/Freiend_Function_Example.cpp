#include<iostream>
using namespace std;
class st;
class am{
    int val;
    friend void exchange(am & , st &);
    public:
        void indata(int a){
            val = a;
        }
        void display(void){
            cout<< val <<endl;
        }
};
class st{
    int val2;
    friend void exchange(am & , st &);
    public:
        void indata(int a){
            val2 = a;
        }
        void display(void){
            cout<< val2 <<endl;
        }
};
void exchange(am & a , st & m){
    int temp = a.val;
    a.val = m.val2;
    m.val2 = temp;
}
int main(){
    am o1;
    st o2;
    o1.indata(40);
    o2.indata(6);
    exchange(o1 , o2);
    cout<<"The value o1 after exchanging becomes :";
    o1.display();
    cout<<"The value o2 after exchanging becomes :";
    o2.display();
    return 0;
}