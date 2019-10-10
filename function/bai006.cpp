// Chuyen tu do F sang do C
#include <iostream>
#include <math.h>
using namespace std;
float DoFSangDoC(float);
int main()
{
    float F;
    cin>>F;
    float kq=DoFSangDoC(F);
    cout<<kq;
    return 0;
}
float DoFSangDoC(float F)
{
    float C=(F-32)*5/9;
    return C;
}