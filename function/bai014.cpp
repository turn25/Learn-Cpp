// Tinh x^32 voi 5 phep nhan
#include <iostream>
#include <math.h>
using namespace std;
float x32(float);
int main()
{
    float x;
    cin>>x;
    float kq=x32(x);
    cout<<kq;
    return 0;
}
float x32(float x)
{
    double x2=x*x;
    double x4=x2*x2;
    double x8=x4*x4;
    double x16=x8*x8;
    double x32=x16*x16;
    return x32;
}