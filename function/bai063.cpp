// Tinh tich cac chu so le cua so nguyen duong n
#include <iostream>
#include <math.h>
using namespace std;
int Tich(int);
int main()
{
    int n;
    cin>>n;
    int kq=Tich(n);
    cout<<kq;
    return 0;
}
int Tich(int n)
{
    int T=1;
    int t=n;
    while(t!=0)
    {
        int dv=t%10;
        if (dv%2!=0)
            T=T*dv;
        t=t/10;
    }
    return T;
}