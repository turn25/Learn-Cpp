// S(x,n)=1-x+x^3/3!+...+(-1)^(n+1)*x^(2n+1)/(2n+1)!
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
    float M=1;
    float S=1-x;
    int dau=1;
    int i=3;
    while(i<=2*n+1)
    {
        T=T*x*x;
        M=M*(i-1)*i;
        S=S+dau*T/M;
        dau=-dau;
        i=i+2;
    }
    return S;
}
