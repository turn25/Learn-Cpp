// Tinh x^14 voi so luong phep nhan toi thieu
#include <iostream>
#include <math.h>
using namespace std;
float x14(float);
int main()
{
    float x;
    cin>>x;
    float kq=x14(x);
    cout<<kq;
    return 0;
}
float x14(float x)
{
    double x2=x*x;
    double x4=x2*x2;
    double x8=x4*x4;
    double x14=x8*x8/x2;
    return x14;
}