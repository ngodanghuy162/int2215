#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n;
    cin>>n;
    double a[n];
    double b[n];
    double product=0;
    for(int i=0;i<n;i++)
     cin>>a[i];
     for(int i=0;i<n;i++)
      cin>>b[i];
     for(int i=0;i<n;i++)
      product+=a[i]*b[i];

cout<<fixed<<setprecision(2)<<product;
}
