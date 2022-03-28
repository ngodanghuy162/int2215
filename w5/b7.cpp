#include <iostream>
using namespace std;
struct student
{
    int roll,age;
    string name,address;
};
void nhap(student &a)
{
    cin>>a.roll;
    cin>>a.age;
    cin>>a.name;
    cin>>a.address;
}
void printage(student a)
{
        if (a.age == 14)
            cout << a.name <<endl;
}
void printroll(student a)
{
        if (a.roll % 2==0)
            cout << a.name << endl;
}

void display(student a,int rollNo)
{
        if (a.roll == rollNo)
            cout<<a.name<<" "<<a.age <<" "<< a.address << endl;
}
int main()
{
   int n;
   cin>>n;
   student ds[n];
   for(int i=0;i<n;i++)
        nhap(ds[i]);
}
