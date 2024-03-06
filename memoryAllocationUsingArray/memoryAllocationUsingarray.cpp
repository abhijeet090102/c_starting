#include <iostream>
using namespace std;

class st
{
    int itemId[100];//private variables
    int itemPrice[100];
    int counter;

public:
    void initCounter(void) { counter = 0; }
    void setPrice(void); //methods
    void displayPrice(void);
};
void st ::setPrice(void) // function
{
    cout << "Enter Id of your item no " << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "Enter Price of your item" << endl;
    cin >> itemPrice[counter];
    counter++;
}
void st::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of item with Id " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}

int main()
{
    st dukam;
    dukam.initCounter();
    dukam.setPrice();
    dukam.setPrice();
    dukam.setPrice();
    dukam.setPrice();
    dukam.displayPrice();
    return 0;
}