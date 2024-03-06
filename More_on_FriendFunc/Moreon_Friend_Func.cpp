#include<iostream>
using namespace std;

class st;
class am{
    int data;
    public: 
        void setValue(int value){
            data = value;
        }
    friend void add(am , st);
};
class st{
    int num ;
    public:
        void setvalue(int value){
            num = value;
        }
    friend void add(am , st);
};
void add(am o1 , st o2){
    cout<<"summing datas of am and st objects gives me "<<o1.data + o2.num;
}
int main(){
    am a;
    a.setValue(4);
    st m;
    m.setvalue(6);
    add(a , m);
    return 0;
}