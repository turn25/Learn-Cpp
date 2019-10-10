// Tinh x^64 voi 6 phep nhan
#include <iostream>
#include <math.h>
using namespace std;
float x64(float);
int main()
{
    float x;
    cin>>x;
    float kq=x64(x);
    cout<<kq;
    return 0;
}
float x64(float x)
{
    double x2=x*x;
    double x4=x2*x2;
    double x8=x4*x4;
    double x16=x8*x8;
    double x32=x16*x16;
    double x64=x32*x32;
    return x64;
}