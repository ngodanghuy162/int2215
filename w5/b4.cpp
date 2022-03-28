#include <iostream>
#include <string>
using namespace std;
struct khoangcach
{
  double inch;
  double feet;
};
void nhap(khoangcach &a)
{
    cin>>a.inch;
    cin>>a.feet;
}
int main()
{
    khoangcach a;
    nhap(a);
}
