#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n;
    cin>>n;
    double array[n];
    double sum=0;
    for (int i=0;i<n;i++)
        {
            cin>>array[i];
            sum+=array[i];
        }
    double mean=sum/n;
    double var=0;
    for (int i=0;i<n;i++)
        var +=((array[i]-mean)*(array[i]-mean));
    var=var/n;
    cout<<fixed<<setprecision(2)<<var;



}
