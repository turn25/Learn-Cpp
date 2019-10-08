// S(x,n)=-1+x^2/2!+...+(-1)^(n+1)*x^2n/(2n)!
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int x,n;
    cin>>x>>n;
    long T=1;
    float M=1;
    float S=-1;
    int dau=1;
    int i=2;
    while(i<=2*n)
    {
        T=T*x*x;
        M=M*(i-1)*i;
        S=S+dau*T/M;
        dau=-dau;
        i=i+2;
    }
    cout<<S;
    return 0;
}
