// Tinh tong cac chu so cua so nguyen duong n
#include <iostream>
#include <math.h>
using namespace std;
int Tong(int);
int main()
{
    int n;
    cin>>n;
    int kq=Tong(n);
    cout<<kq;
    return 0;
}
int Tong(int n)
{
    int S=0;
    int t=n;
    while(t!=0)
    {
        int dv=t%10;
        S=S+dv;
        t=t/10;
    }
    return S;
}
