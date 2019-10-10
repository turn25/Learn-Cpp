// Chuyen tu do C sang do F
#include <iostream>
#include <math.h>
using namespace std;
float DoCSangDoF(float);
int main()
{
    float C;
    cin>>C;
    float kq=DoCSangDoF(C);
    cout<<kq;
    return 0;
}
float DoCSangDoF(float C)
{
    float F=9.0/5*C+32;
    return F;
}