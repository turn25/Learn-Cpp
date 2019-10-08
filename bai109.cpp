// e=1/0!+1/1!+...+1/n! voi do chinh xac 10^-6
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float S=1;
    float M=1;
    float e=1;
    int i=1;
    while(e>=pow(10,-6))
    {
        M=M*i;
        e=(float)1/M;
        S=S+e;
        i++;
    }
    cout<<S;
    return 0;
}