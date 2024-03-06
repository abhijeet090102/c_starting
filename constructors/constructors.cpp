#include<iostream>
using namespace std;

class complex{
    int a , m;
    public:
    // Creating a constructor
    // Constructor is a special member function with same name as of the class. 
    // It is used to intializ the object of its class
    // It is automatically invoked whenever an object is created
    complex(void); // constructor declaration
    void printNum(){
        cout<< "Your number is "<< a << " + "<< m << "i"<<endl;
    }
};
complex :: complex(void){ // this is a default constructor as it takes no parameters
    a = 10;
    m = 0;
}

int main(){
    complex st;
    st.printNum();
    return 0;
}
/* characteristics of constructor 
 1 . It should be declared in the public section of the class 
 2. They are automatically invoked whenever the object is created 
 3. they cannot return valued and do not have return types
 4. It can have default arguments
 5. We cannot refer to their address
 */