//array 
#include <iostream>
using namespace std;

int main(){
    // int a[5];
    // std::cout << "The array has " << sizeof(a)/sizeof(int) << " elements!!";

    std::cout << "Enter the size of array " ;
    int n, sum = 0;
    std::cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        std::cin>>a[i];
    }

    int largest = a[0];
    int smallest = a[0];

    ///int largest = INT_MIN;
    ///int smallest = INT_MAX;

    for(int i=0;i<n;i++){
        if(a[i] > largest){
            largest = a[i];
        }

        if(a[i] < smallest){
            smallest = a[i];
        }
    }

    std::cout<<"largest value = "<<largest<<endl;
    std::cout<<"smallest  value = "<<smallest<<endl;

    for(int i =0 ; i < n;i++)
        sum+=a[i];
    std::cout<<"Sum of the elements of array  = "<<sum<<endl;
   return 0;
}