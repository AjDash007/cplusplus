// Some simple string functions 
#include <iostream>
using namespace std;
// "abcd" --> a --> ab --> abc --> abcd 
void print_prefix(char s[]){
    for(int i=0; i < strlen(s);i++){
       cout<<endl;
       for(int j=0;j<=i;j++)
        cout<<s[j]<<"-->";
    }    
}
void print_suffix(char s[]){
    for(int i=strlen(s)-1; i >= 0;i--){
       cout<<endl;
       for(int j=strlen(s)-1;j>=i;j--)
        cout<<s[j]<<"-->";
    }    
}
int main(){
    char str[10] = "abcd";
    print_prefix(str);
    print_suffix(str);
    return 0;
}

