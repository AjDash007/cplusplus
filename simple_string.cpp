// Simple functions implementations 
#include <iostream>
#include <cstring>
using namespace std;

//find the lenthg of the string 
int length(char* str){
    int length = 0;
    while(*str != '\0'){
        str++;
        length++;
    }
    return length;
}

int main(){
char* s = " ";
cout<< "Current lenght of s :"<<length(s)<<endl;
cout<< "Check with build in :"<<strlen(s)<<endl;
s = "I am good!";
cout<< "Current lenght of s :"<<length(s)<<endl;
cout<< "Check with build in :"<<strlen(s)<<endl;
return 0;
}