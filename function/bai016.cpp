// Tinh x^9 voi 4 phep nhan
#include <iostream>
#include <math.h>
using namespace std;
float x9(float);
int main()
{
    float x;
    cin>>x;
    float kq=x9(x);
    cout<<kq;
    return 0;
}
float x9(float x)
{
    double x2=x*x;
    double x4=x2*x2;
    double x8=x4*x4;
    double x9=x8*x;
    return x9;
}