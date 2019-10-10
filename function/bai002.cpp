// Tinh dien tich duong tron
#include <iostream>
#include <math.h>
using namespace std;
float DienTich(float);
int main()
{
    float r;
    cin>>r;
    float kq=DienTich(r);
    cout<<kq;
    return 0;
}
float DienTich(float r)
{
    float S=M_PI*r*r;
    return S;
}