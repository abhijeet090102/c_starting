#include <iostream>
using namespace std;

class complex
{
    int a;
    int m;

public:
    void setData(int am, int st)
    {
        a = am;
        m = st;
    }
    void setDatabysum(complex o1, complex o2)
    {
        a = o1.a + o2.a;
        m = o1.m + o2.m;
    }
    void printnumber()
    {
        cout << "Your complex number is " << a << "+" << m << "i" << endl;
    }
};
int main()
{
    complex c1, c2, c3;
    c1.setData(1, 2);
    c1.printnumber();
    c2.setData(4, 6);
    c2.printnumber();
    c3.setDatabysum(c1, c2);
    c3.printnumber();
    return 0;
}