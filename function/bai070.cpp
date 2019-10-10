// S(x,n)=x^2+x^4+...+x^2n
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
    int i=2;
    while(i<=2*n)
    {
        T=T*x*x;
        S=S+T;
        i=i+2;
    }
    return S;
}
