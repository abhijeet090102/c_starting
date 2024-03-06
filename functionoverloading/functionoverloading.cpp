#include<iostream>
using namespace std;

int add(float a , int m){
    cout<<"Using function with 2 arguments"<<endl;
    return a+m;
}
int add(int a , int m , int st){
    cout<<"Using function with 3 arguments"<<endl;
    return a+m+st;
}
//claculate the volume of a cylinder
int volume(double r , int h){
    return (3.14*r*r*h);
}
//calculeate the volume of a cube
int volume(int a){
    return (a*a*a);
}
//retangualrbox
int volume(int l , int b ,int h){
    return (l*b*h);
}
int main(){
    cout<<"The sum of 3 and 6 is "<<add(3,6)<<endl;
    cout<<"The sum of 3 , 7 and 6 is "<<add(3,7,6)<<endl;
    cout <<"The volume of a cylinder is "<<volume(4,6)<<endl;
    cout<<"The volume of a cube is "<<volume(5)<<endl;
    cout<<"The volume of a rectangular box is "<<volume(4,5,6)<<endl;
    return 0;
}