#include <iostream>
#include <string>
#include <ctime>
#include <fstream>
#include <bits/stdc++.h>
using namespace std;
const int maxbadguess=7;
ifstream input("wordlist1.txt");
vector <string> wordlist;
string chooseword()
{
    while (!input.eof())
        {
    string str;
    getline(input,str);
    wordlist.push_back(str);
        }
    srand(time(NULL));
    int k=rand()% wordlist.size();
    return wordlist[k];
}
void printhangman(int badguess)
{
    switch (badguess) {
        case 0:
            cout<< "|-----------------------|\n"
                << "|                       |\n"
                << "|\n"
                << "|\n"
                << "|\n"
                << "|\n"
                << "|\n"
                << "|\n"
                << "|\n"
                <<"---------";
            break;
        case 1:
            cout<< "|-----------------------|\n"
                << "|                       |\n"
                << "|                       |\n"
                << "|\n"
                << "|\n"
                << "|\n"
                << "|\n"
                << "|\n"
                << "|\n"
                <<"---------";
            break;
        case 2:
            cout<< "|-----------------------|\n"
                << "|                       |\n"
                << "|                       |\n"
                << "|                       O\n"
                << "|\n"
                << "|\n"
                << "|\n"
                << "|\n"
                << "|\n"
                <<"---------";
            break;
        case 3:
            cout<< "|-----------------------|\n"
                << "|                       |\n"
                << "|                       |\n"
                << "|                       O\n"
                << "|                       |\n"
                << "|\n"
                << "|\n"
                << "|\n"
                << "|\n"
                <<"---------";
            break;
        case 4:
            cout<< "|-----------------------|\n"
                << "|                       |\n"
                << "|                       |\n"
                << "|                       O\n"
                << "|                      ||\n"
                << "|\n"
                << "|\n"
                << "|\n"
                << "|\n"
                <<"---------";
            break;
        case 5:
            cout<< "|-----------------------|\n"
                << "|                       |\n"
                << "|                       |\n"
                << "|                       O\n"
                << "|                      ||| \n"
                << "|\n"
                << "|\n"
                << "|\n"
                << "|\n"
                <<"---------";
            break;
        case 6:
            cout<< "|-----------------------|\n"
                << "|                       |\n"
                << "|                       |\n"
                << "|                       O\n"
                << "|                      ||| \n"
                << "|                       |\n"
                << "|\n"
                << "|\n"
                << "|\n"
                <<"---------";
            break;
        case 7:
            cout<< "|-----------------------|\n"
                << "|                       |\n"
                << "|                       |\n"
                << "|                       O\n"
                << "|                      ||| \n"
                << "|                      ||| \n"
                << "|\n"
                << "|\n"
                << "|\n"
                <<"---------";
            break;
    }
    cout << "\n";
}
void update(string &guessedword,const string &secretword,char guess)
{
    for(int i=0;i<secretword.size();i++)
        if( guess==secretword[i])
            guessedword[i]=guess;
}
void renger(int badguesscount, string guessedword)
{
    cout<<"The word :"<<guessedword<<endl;
    printhangman(badguesscount);
}
char readguess()
{
    char guess;
    cout<<"Enter your guess:";
    cin>>guess;
    return guess;
}
bool contain(string secretword,string guessedword,char guess)
{
    for(int i=0; i<guessedword.size();i++)
        if(guess==secretword[i] && guess !=guessedword[i])
            return true;
    return false;
}
void printresult(bool win,string s)
{
    if (win==true)
            cout<<"congratulation. you win !!!"<<endl;
    else
        {
            cout<<"sorry. you lose !!!"<<endl;
            cout<<"the correct word is:"<<s<<endl;
        }
}
void start()
{
    string secretword=chooseword();
    string guessedword;
    for(int i=0;i<secretword.size();i++)
        guessedword +='-';
    cout<<"The word now is : "<<guessedword<<endl;
    int badguess=0;
    bool win;
    string falsealphabet;
    do
        {
            char guess=readguess();
            if (contain(secretword,guessedword,guess)==true)
                {
                    update(guessedword,secretword,guess);
                    cout<<"the word now :"<<guessedword<<endl;
                }
            else
            {
                badguess++;
                cout<<"so lan doan sai la:"<<badguess<<endl;
                falsealphabet=falsealphabet+guess+"-";
                cout<<"Cac chu da doan sai la: "<<falsealphabet<<endl;
                renger(badguess,guessedword);
            }
            cout<<"--------------------------------------------------------"<<endl;
        }
    while(badguess<maxbadguess && guessedword != secretword);

    if(badguess==maxbadguess)
        win=false;
    else
        win=true;
    printresult(win,secretword);
}

int main()
{
    bool play=true;
    while (play==true)
    {
    char s;
    cout<<"Do you want to play? (y/n):";
    cin>>s;
    if(s=='y' || s=='Y')
        start();
    else
        play=false;
    cout<<"Tam biet em"<<endl;
    }

}
