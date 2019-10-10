// Tinh x^15 voi so luong phep nhan toi thieu
#include <iostream>
#include <math.h>
using namespace std;
float x15(float);
int main()
{
    float x;
    cin>>x;
    float kq=x15(x);
    cout<<kq;
    return 0;
}
float x15(float x)
{
    double x2=x*x;
    double x4=x2*x2;
    double x8=x4*x4;
    double x15=x8*x8/x;
    return x15;
}