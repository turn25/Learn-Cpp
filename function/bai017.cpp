// Tinh x^11 voi so luong phep nhan toi thieu
#include <iostream>
#include <math.h>
using namespace std;
float x11(float);
int main()
{
    float x;
    cin>>x;
    float kq=x11(x);
    cout<<kq;
    return 0;
}
float x11(float x)
{
    double x2=x*x;
    double x4=x2*x2;
    double x8=x4*x4;
    double x11=x8*x4/x;
    return x11;
}