// S(n)=1+1/(1+2)+...+1/(1+2+...+n) voi do chinh xac 10^-6
#include <iostream>
#include <cmath>
using namespace std;
float DoChinhXac();
int main()
{
    float kq=DoChinhXac();
    cout<<kq;
    return 0;
}
float DoChinhXac()
{
    float S=0;
    float M=0;
    float e=1;
    int i=1;
    while(e>=pow(10,-6))
    {
        M=M+i;
        e=(float)1/M;
        S=S+e;
        i++;
    }
    return S;
}