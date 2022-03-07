#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    double sum=1;
    double oldSum=0;
    int i=1;
    double sohang=1;
    while(sum>oldSum+0.001)
    {
        sohang=sohang*x/i;
        oldSum=sum;
        sum+=sohang;
        i++;
    }
    cout << setprecision(4)<< fixed <<sum;

}
