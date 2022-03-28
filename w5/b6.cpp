#include <iostream>

using namespace std;
struct sophuc
{
    double thuc;
    double ao;
};
void nhap(sophuc &a)
{
    cin>>a.thuc;
    cin>>a.ao;
}
void xuat(sophuc a)
{
    cout<<"phan thuc:"<<a.thuc<<endl;
    cout<<"phan ao:"<<a.ao<<endl;
}
sophuc cong(sophuc a,sophuc b)
{
    sophuc c;
    c.thuc=a.thuc+b.thuc;
    c.ao=a.ao+b.ao;
    return c;
}
sophuc tru(sophuc a,sophuc b)
{
    sophuc c;
    c.thuc=a.thuc-b.thuc;
    c.ao=a.ao-b.ao;
    return c;
}
sophuc nhan(sophuc a,sophuc b)
{
    sophuc c;
    c.thuc=a.thuc*b.thuc-a.ao*b.ao;
    c.ao=a.ao*b.thuc+a.thuc*b.ao;
    return c;
}
int main()
{
    sophuc a,b;
    nhap(a);
    nhap(b);
    cout<<"Phep nhan"<<endl;
    xuat(nhan(a,b));
    cout<<"Phep cong"<<endl;
    xuat(cong(a,b));
    cout<<"Phep tru"<<endl;
    xuat(tru(a,b));
}
