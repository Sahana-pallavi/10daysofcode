#include <iostream>
using namespace std;
int main()
{
 
int n,d;
cin>>n;
cin>>d;
int *a=new int[n];
for(int i=0;i<n;i++)
cin>>a[(i+n-d)%n];
for(int i=0;i<n;i++)
   cout<<a[i]<<" ";

return 0;

}
 