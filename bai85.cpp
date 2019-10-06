// S(x,n)=x-x^2+x^3+...+(-1)^(n+1)*x^n
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int x,n;
    cin>>x>>n;
    long T=1;
    long S=0;
    int dau=1;
    int i=1;
    while(i<=n)
    {
        T=T*x;
        S=S+dau*T;
        dau=-dau;
        i++;
    }
    cout<<S;
    return 0;
}
