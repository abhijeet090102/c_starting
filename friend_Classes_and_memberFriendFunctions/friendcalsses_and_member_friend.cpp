#include <iostream>
using namespace std;

// forward declaration
class complex;
class calculator
{
public:
    int add(int am, int st)
    {
        return (am + st);
    }
    int sumrealComplex(complex, complex);
    int sumCompComplex(complex, complex);
};
class complex
{
    int a, m;
    //Individually declaring function as friend
    // friend int calculator ::sumrealComplex(complex o1, complex o2);
    // friend int calculator ::sumCompComplex(complex o1, complex o2);

    //Alter : Declaring the entire calculator class as friend;
    friend class calculator;
public:
    void setNum(int t, int s)
    {
        a = t;
        m = s;
    }
    void printNumber()
    {
        cout << "Your number is " << a << " + " << m << "i" << endl;
    }
};
int calculator ::sumrealComplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}
int calculator ::sumCompComplex(complex o1, complex o2)
{
    return (o1.m + o2.m);
}
int main()
{
    complex o1, o2;
    o1.setNum(1, 2);
    o2.setNum(4, 6);
    calculator calc;
    int res = calc.sumrealComplex(o1, o2);
    cout << "The sum of real part of o1 and o2 is " << res << endl;
    int rescomp = calc.sumCompComplex(o1, o2);
    cout << "The sum of complex part of o1 and o2 is " << rescomp << endl;
    return 0;
}