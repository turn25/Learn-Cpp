// Tinh x^13 voi so luong phep nhan toi thieu
#include <iostream>
#include <math.h>
using namespace std;
float x13(float);
int main()
{
    float x;
    cin>>x;
    float kq=x13(x);
    cout<<kq;
    return 0;
}
float x13(float x)
{
    double x2=x*x;
    double x4=x2*x2;
    double x8=x4*x4;
    double x13=x8*x8/x2/x;
    return x13;
}