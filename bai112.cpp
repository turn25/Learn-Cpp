// pi=1/16^i *(4/(8i+1)-2/(8i+4)-1/(8i+5)-1/(8i+6)) [tu i=2 den vo cung] voi do chinh xac 10^-6
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float S=0;
    float T=16;
    float e=1;
    int i=2;
    while(e>=pow(10,-6))
    {
        T=T*16;
        e=(((float)4/(8*i+1))-((float)2/(8*i+4))-((float)1/(8*i+5))-((float)1/(8*i+6)))/T;
        S=S+e;
        i++;
    }
    cout<<S;
    return 0;
}