// Counting the number of 1s in a given number 
// Use iteration 
// Use recurssion 
#include <iostream>
#include <cstring>
using namespace std;
int count_ones(const int i){
    const int j=0x1; // masking bit
    int local = i;
    if (i==0) return 0 ;
    else {
        if(i&j){
         local>>=1;
         return 1+count_ones(local);
        }
    }
}
int main(){
    int i = 0xF;  // total 16 1's 
//By Iteration
    const int j=0x1;
    int count = 0;
    while(i){
    if(i&j)
      count++;  
    i=i>>1;  
    }
    cout<<"The number of 1s in i : " << count << endl;
//By recurrsion 
    i = 0xF;
    cout<<"The number of 1s in i : " << count_ones(i) << endl;
    return 0;
}