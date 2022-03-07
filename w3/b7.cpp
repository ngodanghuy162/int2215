#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    int countalpha=0;
    int countnum=0;
    int countother=0;
    for(int i=0;i<s.size();i++)

      {
        if ((s[i]>='A'&&s[i]<='Z')||(s[i]>='a' && s[i]<='z'))
            countalpha++;
        else if (s[i]>='0' && s[i]<='9')
            countnum++;
        else
            countother++;
      }
      cout<<countalpha<<" "<<countnum<<" "<<countother;

}
