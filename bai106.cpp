// Sin(x)=x-x^3/3!+..+((-1)^n)(x^(2n+1))/(2n+1)! voi do chinh xac 10^-6
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int x;
    cin>>x;
    float r=(x*M_PI)/180;
    long T=r;
    float sinx=r;
    float M=1;
    float e=1;
    int i=3;
    int dau=-1;
    while(e>=pow(10,-6))
    {
        T=T*r*r;
        M=M*(i-1)*i;
        e=T/M;
        sinx=sinx+dau*e;
        dau=-dau;
        i=i+2;
    }
    cout<<sinx;
    return 0;
}