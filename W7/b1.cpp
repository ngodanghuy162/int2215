#include <iostream>

using namespace std;

int main()
{
   int n;
   cin>>n;
   int a[n];
   int d;
   cin>>d;
   d=d%n;
   for(int i=0;i<n;i++)
   {
    if (i+1+d<=n)
        a[i]=i+1+d;
    else
        a[i]=i+1+d-n;
   }
   for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
}
