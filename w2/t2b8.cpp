#include <iostream>
using namespace std;
int main()
{
long long int n;
cin>>n;
int dem=0;
if (n<0) n=-n;

if (n==0)
    cout<<"1";
else {

while (n !=0)
{
    n=n/10;
    dem++;

}

cout<<dem;}
}
