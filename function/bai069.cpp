// S(x,n)=x+x^2+...+x^n
#include <iostream>
#include <math.h>
using namespace std;
long Tong(int,int);
int main()
{
    int x,n;
    cin>>x>>n;
    long kq=Tong(x,n);
    cout<<kq;
    return 0;
}
long Tong(int x,int n)
{
    long S=0;
    long T=1;
    int i=1;
    while(i<=n)
    {
        T=T*x;
        S=S+T;
        i++;
    }
    return S;
}
