// S(x,n)=x+x^2/2!+...+x^n/n!
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int x,n;
    cin>>x>>n;
    int T=1;
    float S=0;
    float M=1;
    int i=1;
    while(i<=n)
    {
        T=T*x;
        M=M*i;
        S=S+T/M;
        i++;
    }
    cout<<S;
    return 0;
}
