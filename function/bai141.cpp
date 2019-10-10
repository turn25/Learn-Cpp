//Tim chu so dau tien cua so nguyen duong n
#include <iostream>
#include <cmath>
using namespace std;
int DauTien(int);
int main()
{
    int n;
    cin>>n;
    int kq=DauTien(n);
    cout<<kq;
    return 0;
}
int DauTien(int n)
{
    int dt=abs(n);
    while(dt>=10)
        dt=dt/10;
    return dt;
}