#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
struct kh
{
    string name;
    string acountnumber;
    double balance;
};
void nhap(kh &a)
{
    getline(cin,a.name);
    cin>>a.acountnumber;
    cin>>a.balance;
}
void xuatsodu(kh a)
{
    if(a.balance<200)
        cout<<"Ten la:"<<a.name<<endl;
}
void xuat(kh a)
{
    cout<<"Name :"<<a.name<<endl;
    cout<<"acountnumber is"<<a.acountnumber<<endl;
    cout<<a.balance<<endl;
}
void them(kh &a)
{
    if (a.balance>1000)
        a.balance +=100;
}
int main()
{
    int n;
    cin>>n;
    kh ds[n];
    for(int i=0;i<n;i++)
        nhap(ds[i]);
    for(int i=0;i<n;i++)
        {
            xuat(ds[i]);
            them(ds[i]);
        }
    double sodu[n];
    for(int i=0;i<n;i++)
        sodu[i]=ds[i].balance;
    sort(sodu,sodu+n);
    for(int i=0;i<n;i++)
        cout<<sodu[i]<<" ";
}
