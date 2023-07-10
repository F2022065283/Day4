#include <iostream>
using namespace std;
int main() 
{
  int m,n;
  cout<<"Enter m range \n";
  cin>>m;
  cout<<"Enter n range \n";
  cin>>n;
  int array[n];

  // if (n == 0 || n == 1)
  // {
  //   p = false;
  // }
  for (int i = m; i <= n/2; i++) 
  {
    if (m % i != 0) 
    {
      array[i]=m;    
    }
  }
  
  for(int i=m;i<=n;i++)
  {
    cout<<array[i]<<",";
  }
  return 0;
}