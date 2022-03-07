#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
     int a,b,c;
    cin>>a>>b>>c;
    if ((a+b>c) &&(a+c>b) && (b+c>a))
     {float s;
     double p=(a+b+c);
     p=p/2;
    s=sqrt(p*(p-a)*(p-b)*(p-c));
    cout<<fixed<<setprecision(2)<<s;
     }
     else
     cout<<"invalid";

}
