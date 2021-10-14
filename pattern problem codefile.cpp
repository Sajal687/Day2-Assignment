#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0
int main()
{
  int i,j,n;
  cout<<"Enter Number Of Rows : ";
  cin>>n;
  for(i=0;i<n;i++)
 {
    for(j=0;j<=i;j++)
    {
      if((i-j)%2==0)
        cout<<"1";
      else
        cout<<"0";
    }
    cout<<"\n";
  }
}
