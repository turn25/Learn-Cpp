// Tinh the tich hinh cau
#include <iostream>
#include <math.h>
using namespace std;
float TheTich(float);
int main()
{
    float r;
    cin>>r;
    float kq=TheTich(r);
    cout<<kq;
    return 0;
}
float TheTich(float r)
{
    float V=4.0/3*M_PI*r*r*r;
    return V;
}