// program to find the length of string 

#include <iostream>
#include <cstring>
using namespace std;

int main(){
 char str[100];
 cout << "Enter the string  " ;
 cin >> str;
 cout << "The string is   "  << str << endl;
 int count = 0;
 cout << "The length string is   "  << strlen(str) << endl ; 
}