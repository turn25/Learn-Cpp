// S(x,n)=x+x^3+...+x^(2n+1)
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
    long S=x;
    long T=x;
    int i=3;
    while(i<=2*n+1)
    {
        T=T*x*x;
        S=S+T;
        i=i+2;
    }
    return S;
}
