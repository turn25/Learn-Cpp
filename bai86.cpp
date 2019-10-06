// S(x,n)=-x^2+x^4-x^6+...+(-1)^(n)*x^2n
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int x,n;
    cin>>x>>n;
    long T=1;
    long S=0;
    int dau=-1;
    int i=2;
    while(i<=2*n)
    {
        T=T*x*x;
        S=S+dau*T;
        dau=-dau;
        i=i+2;
    }
    cout<<S;
    return 0;
}
