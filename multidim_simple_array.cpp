#include <iostream>
#include <iomanip>
using namespace std;

#define WIDTH 5
#define HEIGHT 3

int jimmy [HEIGHT][WIDTH];
int n,m;

int main ()
{
  for (n=0; n<HEIGHT; n++)
    for (m=0; m<WIDTH; m++)
    {
      jimmy[n][m]=(n+1)*(m+1);
    }
  for (n=0; n<HEIGHT; n++)
    {
     for (m=0; m<WIDTH; m++)
     {
      std::cout << std::setw(3);
      cout<<jimmy[n][m]<<"|";
     }
     cout<<endl;
     for (m=0; m<WIDTH*2; m++)
     {
       cout<<"__";
     }
     cout<<endl;
    }
}