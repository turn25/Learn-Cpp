// S(x,n)=-x-x^3+x^5+...+(-1)^n*x^(2n+1)
#include <iostream>
#include <math.h>
using namespace std;
float Tong(int,int);
int main()
{
    int x,n;
    cin>>x>>n;
    float kq=Tong(x,n);
    cout<<kq;
    return 0;
}
float Tong(int x,int n)
{
    long T=x;
    long S=x;
    int dau=-1;
    int i=3;
    while(i<=2*n+1)
    {
        T=T*x*x;
        S=S+dau*T;
        dau=-dau;
        i=i+2;
    }
    return S;
}
