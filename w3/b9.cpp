#include <iostream>
#include <string>
using namespace std;

int main()
{
    string text;
    getline(cin,text);
    int position;
    for (int i=0;i<text.size();i++)
        if (text[i]!=' ')
        {
            position=i;
            break;
        }
    for(int i=0;i<position;i++)
        cout<<text[i];
    for(int i=position;i<text.size();i++)
       {

        if (text[i]!=' ')
            cout<<text[i];
        else
            if(text[i+1]!=' ')
                cout<<text[i];
        }
}
