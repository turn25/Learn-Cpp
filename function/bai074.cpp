// S(x,n)=x+x^2/2!+...+x^n/n!
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
    float S=0;
    float M=1;
    int i=1;
    while(i<=n)
    {
        T=T*x;
        M=M*i;
        S=S+T/M;
        i++;
    }
    return S;
}
