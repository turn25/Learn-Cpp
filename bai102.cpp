// S(n)=1/2+1/4+...+1/2n voi do chinh xac 10^-6
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float S=0;
    int i=2;
    float e=1;
    while(e>=pow(10,-6))
    {
        e=(float)1/i;
	S=S+e;
        i=i+2;
    }
    cout<<S;
    return 0;
}