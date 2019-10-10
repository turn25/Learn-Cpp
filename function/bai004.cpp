// Tinh dien tich xung quanh hinh cau
#include <iostream>
#include <math.h>
using namespace std;
float DTXungQuanh(float);
int main()
{
    float r;
    cin>>r;
    float kq=DTXungQuanh(r);
    cout<<kq;
    return 0;
}
float DTXungQuanh(float r)
{
    float S=4*M_PI*r*r;
    return S;
}