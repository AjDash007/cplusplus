// Program to swap two numbers
#include <iostream>
using namespace std;

int main(){
int a = 3;
int b = 4;
a = a^b;
b = a^b;
a = a^b;

cout << "a = " << a <<" b = " << b << endl;

int temp;
temp = a;
a = b;
b = temp;

cout << "a = " << a <<" b = " << b << endl;

}