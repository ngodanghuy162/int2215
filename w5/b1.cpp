#include <iostream>
#include <string>
using namespace std;
struct student
{
  int roll;
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
    student a;
    nhap (a);
    xuat(a);

}
