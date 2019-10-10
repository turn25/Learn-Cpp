// pi=3+4/(2*3*4)-4/(4*5*6)+...+4/(2n*(2n+1)*(2n+2)) voi do chinh xac 10^-6
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
    float S=3;
    float e=1;
    int i=2;
    int dau=1;
    while(e>=pow(10,-6))
    {
        e=(float)4/(i*(i+1)*(i+2));
        S=S+e*dau;
        i=i+2;
        dau=-dau;
    }
    return S;
}