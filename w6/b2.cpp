#include <iostream>
#include <string>
using namespace std;
bool check(int a[],int size,int n)
{
    int dem=0;
    for(int i=0;i<size;i++)
        if(n==a[i])
            dem++;
    if(dem<2)
        return true;
    else
        return false;
}
int main()
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<n;i++)
        if(check(a,n,a[i])==true)
            cout<<a[i]<<" ";
}
