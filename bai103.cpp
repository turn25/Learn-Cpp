// S(n)=1+1/3+...+1/(2n+1) voi do chinh xac 10^-6
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float S=0;
    float e=1;
    int i=3;
    while(e>=pow(10,-6))
    {
        e=(float)1/i;
        S=S+e;
        i++;
    }
    cout<<S;
    return 0;
}