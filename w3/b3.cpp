#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++)
        cin>>a[i];
    int count=0;
    vector<int> b;
    b.push_back(a[0]);
    for(int i=1;i<n;i++)
        if (a[i]!=a[i-1])
            b.push_back(a[i]);
    for(int i=0;i<b.size();i++)
        cout<<b[i]<<" ";
}
