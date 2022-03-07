#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    cin>>n;
    double a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        for (int j=i+1;j<n;j++)
         if(a[i]<a[j])
            {
                double k=a[i];
                a[i]=a[j];
                a[j]=k;
            }
    for(int i=0;i<n;i++)
        cout<<fixed<<setprecision(2)<<a[i]<<" ";
    return 0;
}
