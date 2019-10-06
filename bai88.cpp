// S(n)=1-1/(1+2)+...+(-1)^(n+1)*1/(1+2+...+n)
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    float M=0;
    float S=0;
    int dau=1;
    int i=1;
    while(i<=n)
    {
        M=M+i;
        S=S+dau*(float)1/M;
        dau=-dau;
        i++;
    }
    cout<<S;
    return 0;
}
