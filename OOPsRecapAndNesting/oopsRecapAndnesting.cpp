#include<iostream>
#include<string.h>
using namespace std;

class binary{
    // private:
        string am;
            void chk_bin(void);

        public:
            void read(void);
            void ones(void);
            void display(void);
    };

void binary :: read(void){
    cout<<"Enter a binary number"<<endl;
    cin>>am;
}
void binary :: chk_bin(void){
    for(int i = 0 ; i<am.length(); i++){
        if(am.at(i) !='0' && am.at(i)!='1'){
            cout<<"Incorrect binary format"<<endl;
            exit(0);
        }
        /*else{
            cout<<"Binary format is correct"<<endl;
        }*/
    }
}
void binary :: ones(void){
    chk_bin(); //nesting of member function
    for(int i=0 ; i<am.length(); i++){
        if(am.at(i) =='0' ){
            am.at(i) = '1';
        }
        else{
            am.at(i) = '0';
        }
    }
}
void binary :: display(void){
    cout<<"Displaying your binary number"<<endl;
    for(int i=0 ; i<am.length(); i++){
        cout<<am.at(i);
    }
    cout<<endl;
}
int main(){
    // OOPs - Classes and Objects
    // C++ --> intially called --> C with classes by stroustrop
    // class --> extension of structure (in c)
    // structures had limitation 
    //      -- > members are public 
    //      --> no methods
    // classes --> structures + more
    // classes --> can have methods and properties
    // classes --> can make few memebers as private & few as public
    // you can declare objects along with the class declaration
        /* class Eamployee{
              // Class defination
        } abhijeet , manisha;*/
    // structure in c++ are typedef
    
    // abhijeet.salary = 8 makes no sense if salary is private
    
    // Nesting of member functions
    binary st;
    st.read();
    // st.chk_bin();
    st.display();
    st.ones();
    st.display();
    
    return 0;
}