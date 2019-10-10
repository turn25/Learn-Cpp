// Tinh x^7 voi 4 phep nhan
#include <iostream>
#include <math.h>
using namespace std;
float x7(float);
int main()
{
    float x;
    cin>>x;
    float kq=x7(x);
    cout<<kq;
    return 0;
}
float x7(float x)
{
    float x2=x*x;
    float x4=x2*x2;
    float x6=x4*x2;
    float x7=x6*x;
    return x7;
}