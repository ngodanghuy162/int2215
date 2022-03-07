#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    bool check=true;
    int a[n],b[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        cin>>b[i];
    for(int i=0;i<n;i++)
        if(a[i]!=b[i])
            {check=false;
        break;}
    if(check==true)
            cout<<"YES";
    else
        cout<<"NO";
}
