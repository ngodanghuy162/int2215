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
};
void nhap(student &a)
{
    cin>>a.roll;
    cin.ignore();
    getline(cin,a.name);
    cin>>a.age;
    cin>>a.mark;
}
void xuat(student a)
{
    cout<<"Roll student :"<<a.roll<<endl;
    cout<<"Name of student :"<<a.name<<endl;
    cout<<"Age of student :"<<a.age<<endl;
    cout<<"Mark student :"<<a.mark<<endl;
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
        cout<<"---------------------"<<endl;
        xuat(std[1]);
}
