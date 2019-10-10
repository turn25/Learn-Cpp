// cosx(x)=1-x^2/2!+..+((-1)^n)(x^(2n))/(2n)! voi do chinh xac 10^-6
#include <iostream>
#include <cmath>
using namespace std;
float DoChinhXac(int);
int main()
{
    int x;
    cin>>x;
    float kq=DoChinhXac(x);
    cout<<kq;
    return 0;
}
float DoChinhXac(int x)
{
    float r=(x*M_PI)/180;
    long T=1;
    float cosx=1;
    float M=1;
    float e=1;
    int i=2;
    int dau=-1;
    while(e>=pow(10,-6))
    {
        T=T*r*r;
        M=M*(i-1)*i;
        e=T/M;
        cosx=cosx+dau*e;
        dau=-dau;
        i=i+2;
    }
    return cosx;
}