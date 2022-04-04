#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int dem(int a[],int size,int n)
{
    int dem=0;
    for(int i=0;i<size;i++)
        if(n==a[i])
            dem++;
    return dem;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    vector <int> so;
    sort(a,a+n);
    for(int i=0;i<n;i++)
        if (a[i]!=a[i+1])
            so.push_back(a[i]);
    for(int i=0;i<so.size();i++)
        if(dem(a,n,so[i])>1)
            cout<<so[i]<<":"<<dem(a,n,so[i])<<endl;
}
