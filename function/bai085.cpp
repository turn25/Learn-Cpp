// S(x,n)=x-x^2+x^3+...+(-1)^(n+1)*x^n
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
    long T=1;
    long S=0;
    int dau=1;
    int i=1;
    while(i<=n)
    {
        T=T*x;
        S=S+dau*T;
        dau=-dau;
        i++;
    }
    return S;
}
