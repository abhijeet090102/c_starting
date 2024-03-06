#include <iostream>
using namespace std;

class amployee
{
    int id;
    int sallary;

public:
    void setid(void)
    {
        sallary = 122;
        cout << "Enter the id of employee " << endl;
        cin >> id;
    }
    void getid(void)
    {
        cout << "The id of this employee is " << id << endl;
    }
};
int main()
{
    // amployee abhijeet , manisha ;
    amployee amst[4];
    for (int i = 0; i < 4; i++)
    {
        amst[i].setid();
        amst[i].getid();
    }

    return 0;
}