// S(x,n)=1+x+x^3/3!+...+x^(2n+1)/(2n+1)!
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int x,n;
    cin>>x>>n;
    int T=x;
    float S=1+x;
    float M=1;
    int i=3;
    while(i<=2*n+1)
    {
        T=T*x*x;
        M=M*(i-1)*i;
        S=S+T/M;
        i=i+2;
    }
    cout<<S;
    return 0;
}
