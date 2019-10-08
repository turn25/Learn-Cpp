// S(x,n)=1-x+x^3/3!+...+(-1)^(n+1)*x^(2n+1)/(2n+1)!
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int x,n;
    cin>>x>>n;
    long T=x;
    float M=1;
    float S=1-x;
    int dau=1;
    int i=3;
    while(i<=2*n+1)
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
