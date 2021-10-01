//String reverse 

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    char  str[10];
    string abc;
    cout<<"Enter the string  ";
    cin.getline(str,10);
    cout<<str;
    abc = str;
    reverse(abc.begin(),abc.end());
    cout<<abc;
    return 0;
}