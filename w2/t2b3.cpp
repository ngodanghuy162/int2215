#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int lowerBound,upperBound;
    cin>>lowerBound>>upperBound;
    int a,b;
    float d;
    b=sqrt(upperBound);
    d=sqrt(lowerBound);
    a=sqrt(lowerBound);
    if (d>a)
        for(int i=a+1;i<=b;i++)
            cout<<i*i<<" ";
    else
        for(int i=a;i<=b;i++)
            cout<<i*i<<" ";
}
