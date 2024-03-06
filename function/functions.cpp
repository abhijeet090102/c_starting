#include<iostream>
int add2(int i){
    int j = i + 2;
    return j;
}// the function is of the type (int) -> (int)
int add2(int i, int j){
    int k =i + j + 2;
    return k;
}
int main(){
    // int am = add2(2,4);
    std::cout<< add2(2,4) << "\n";
    return 0;
}