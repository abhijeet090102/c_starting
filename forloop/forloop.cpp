#include<iostream>
using namespace std;
int main(){
    int sum = 0;
    // sum values from 1 thriugh 10 inclusive
    for(int val = 1; val <= 10; ++val){
        sum += val;
    }
    std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;
    return 0;
}