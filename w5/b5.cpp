// Example program
#include <iostream>
#include <string>
using namespace std;
struct student
{
  string roll;
  string name;
  int age;
  double mark;
  double chem;
  double math;
  double phy;
};
void nhap(student &a)
{
    cin>>a.roll;
    cin.ignore();
    getline(cin,a.name);
    cin>>a.age;
    cin>>a.mark;
    cin>>a.chem;
    cin>>a.math;
    cin>>a.phy;
}
int main()
{
    int n;
    cin>>n;
    student std[5];
    for(int a=0;a<5;a++)
    {
        nhap(std[a]);
    }
    for(int a=0;a<5;a++)
        cout<<"Percentage is:"<<(std[a].chem+std[a].math+std[a].phy)/3<<endl;
}
