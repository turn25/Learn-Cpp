// S(x,n)=-x+x^2/(1+2)+...+(-1)^(n)*x^n/(1+2+...+n)
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int x,n;
    cin>>x>>n;
    long T=1;
    float M=0;
    float S=0;
    int dau=-1;
    int i=1;
    while(i<=n)
    {
        T=T*x;
        M=M+i;
        S=S+dau*T/M;
        dau=-dau;
        i++;
    }
    cout<<S;
    return 0;
}
