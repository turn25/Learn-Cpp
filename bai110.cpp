// pi=4/1-4/3+...+(-1)^n * 4/(2n+1) voi do chinh xac 10^-6
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float S=4;
    float e=1;
    int i=3;
    int dau=-1;
    while(e>=pow(10,-6))
    {
        e=(float)4/i;
        S=S+e*dau;
        i=i+2;
        dau=-dau;
    }
    cout<<S;
    return 0;
}