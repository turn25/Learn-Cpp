// S(n)=1+1/(1+2)+...+1/(1+2+...+n) voi do chinh xac 10^-6
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float S=0;
    float M=0;
    float e=1;
    int i=1;
    while(e>=pow(10,-6))
    {
        M=M+i;
        e=(float)1/M;
        S=S+e;
        i++;
    }
    cout<<S;
    return 0;
}