// S(x,n)=x+x^2/2!+...+x^2n/2n!
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
    int T=1;
    float S=1;
    float M=1;
    int i=2;
    while(i<=2*n)
    {
        T=T*x*x;
        M=M*(i-1);
        S=S+T/M;
        i=i+2;
    }
    return S;
}
