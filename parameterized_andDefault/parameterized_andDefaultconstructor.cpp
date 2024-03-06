#include <iostream>
using namespace std;

class complex
{
    int a, m;

public:
    complex(int , int); // constructor declaration
    void printNum()
    {
        cout << "Your number is " << a << " + " << m << "i" << endl;
    }
};
complex ::complex(int am ,int ma)
{ // this is a parameterized constructor as it takes two parameters
    a = am;
    m = ma;
}

int main()
{
    // implicit call
    complex st(4,6);
    // Explicit call
    complex amst = complex(4,8);
    st.printNum();
    amst.printNum();
    return 0;
}