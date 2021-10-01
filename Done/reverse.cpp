// program to reverse the array 

#include <iostream>
using namespace std;

int main(){
int n;
cout << "Enter how many elelments you want in your array : ";
cin >> n;
int arr[n];
for(int i =0; i<n;i++){
    cout << "Enter the element number [" << i << "] ";
    cin >> arr[i];
}
for(int i =0; i<n;i++){
    cout << "The element number [" << i << "] " << arr[i] <<endl;
}
for(int i = n-1;i>=0;i--)
{
    cout << "The element number [" << i << "] " << arr[i] << endl;
}

}