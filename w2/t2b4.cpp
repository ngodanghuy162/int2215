#include <iostream>
using namespace std;
int main()
{
    int total, totalLegs;
    cin>>total>>totalLegs;
    bool check=false;
    for(int i=1;i<=total;i++)
        for(int j=1;j<=total;j++)
            if (2*i+4*j==totalLegs && i+j==total)
                {
                    cout<<"chicken = "<<i<<", dog = "<<j;
                    check=true;
                    break;
                }
    if (check==false) cout <<"invalid";

}
