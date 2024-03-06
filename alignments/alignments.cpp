#include<iostream>
int main(){
    alignas(int) unsigned char buf[sizeof(int)];
    new (buf) int(42);
    std:: cout << "The alignment requirement of int is : " << alignof(int) << '\n';
    return 0;
}
