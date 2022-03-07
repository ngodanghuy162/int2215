#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    cin>>n;
    double a[n+1];
    int position;
    for (int i=0;i<n;i++)
        cin>>a[i];
    double x;
    cin>>x;
    for (int i=0;i<n;i++)
        {
            if (a[i]<=x && a[i+1] >=x)
                position=i+1;
            if (x<=a[0]) position=0;
            if (x>=a[n-1])  position=n;
        }
    if (position==n)
        a[n]=x;
    else
    {
    for(int i=n;i>position;i--)
    {
        a[i]=a[i-1];
    }
    a[position]=x;
    }
    for(int i=0;i<=n;i++)
        cout<<fixed<<setprecision(2)<<a[i]<<" ";
}
