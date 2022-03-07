#include<iostream>
using namespace std;
int d,m,y;
int main()
{
    cin >> d>> m >> y;
    int y0 = (y - (14 - m) / 12);
int x = y0 + y0/4 - y0/100 + y0/400;
int m0 = m + 12 * ((14 - m)/12) - 2;
int dayOfWeek = (d + x + 31 * m0/12) % 7;
switch(dayOfWeek)
{
case 0: {
    cout<<"sun";
    break;}
case 1: {
    cout<<"mon";
    break;}
case 2: {
    cout<<"tue";
    break;}
case 3: {
    cout<<"wed";
    break;}
case 4: {
    cout<<"thu";
    break;}
case 5: {
    cout<<"fri";
    break;}
case 6: {
    cout<<"sat";
    break;}
}}
