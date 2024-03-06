#include<iostream>
int main(){
    //currval is the number we're counting ; we'll read new values into val
    int currVal = 0 , val = 0;
    // read first number and ensure that we have data to process
    if(std::cin>>currVal){
        int count = 1; // store the count for the current value we're processing
        while(std::cin>>val){// read the remaining numbers
            if(val==currVal){//if the values are the same
                ++count;
            }
            else{ //otherwise , print the count for the previous value
                std::cout<<currVal<<"occurs "<< count <<"times "<<std::endl;
                currVal = val; // remember the new value
                count = 1; // rest the counter
            }
        }
        // remember to print the count for the last value in the file
        std::cout<<currVal<<"occurs "<< count <<"times "<<std::endl;
    }
    return 0;
}