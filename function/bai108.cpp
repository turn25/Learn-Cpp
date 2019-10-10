// e^x=1+x+x^2/2!+...+x^n/n! voi do chinh xac 10^-6
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
    long T=1;
    float ex=1;
    float M=1;
    float e=1;
    int i=1;
    while(e>=pow(10,-6))
    {
        T=T*x;
        M=M*i;
        e=T/M;
        ex=ex+e;
        i++;
    }
    return ex;
}