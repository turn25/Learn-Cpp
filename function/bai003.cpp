// Tinh chu vi duong tron
#include <iostream>
#include <math.h>
using namespace std;
float ChuVi(float);
int main()
{
    float r;
    cin>>r;
    float kq=ChuVi(r);
    cout<<kq;
    return 0;
}
float ChuVi(float r)
{
    float P=M_PI*2*r;
    return P;
}