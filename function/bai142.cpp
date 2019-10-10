//Tim so dao nguoc cua so nguyen duong n
#include <iostream>
#include <cmath>
using namespace std;
int DaoNguoc(int);
int main()
{
    int n;
    cin>>n;
    int kq=DaoNguoc(n);
    cout<<kq;
    return 0;
}
int DaoNguoc(int n)
{
    int dn=0;
    for(int t=n;t!=0;t=t/10)
    {
        int dv=t%10;
        dn=dn*10+dv;
    }
    return dn;
}