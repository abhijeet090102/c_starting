#include<iostream>
using namespace std;

class amployee{
    int Id;
    static int count; //class property and this share all objects 
    public:
        void setData(void){
            cout<<"Enter the id "<<endl;
            cin>>Id;
            count ++;
        }
        void getData(void){
            cout<<"The id of this employee is "<< Id <<" and this is employee no "<<   count <<endl; }
        static void getcount(void){ //static member function
            cout<<"The value of count is "<<count<<endl;
        }
};
int amployee:: count; // default value is 0
int main(){
    amployee abhijeet,manisha;
//count is the static data member of class employee
   /* abhijeet.Id = 1 ; // cannot do this as id and count are private 
    abhijeet.count = 1;*/
    abhijeet.setData();
    abhijeet.getData();
    amployee::getcount();
    manisha.setData();
    manisha.getData();
    amployee::getcount();
    return 0;
}