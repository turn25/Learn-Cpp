// Tinh x^6 voi 3 phep nhan
#include <iostream>
#include <math.h>
using namespace std;
float x6(float);
int main()
{
    float x;
    cin>>x;
    float kq=x6(x);
    cout<<kq;
    return 0;
}
float x6(float x)
{
    float x2=x*x;
    float x4=x2*x2;
    float x6=x4*x2;
    return x6;
}