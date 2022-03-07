#include <iostream>
#include <string>
using namespace std;

int main()
{
    string text;
    getline(cin,text);
    int i=0;
    while (i<=text.size())
    {
       if (text.substr(i,4) != "Zues")
            {
            cout<<text[i];
            i++;
            }
        else
            {
            cout<<"Zeus";
            i=i+4;
            }
    }
}
