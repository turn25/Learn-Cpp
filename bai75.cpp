// S(x,n)=x+x^2/2!+...+x^2n/2n!
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int x,n;
    cin>>x>>n;
    int T=1;
    float S=1;
    float M=1;
    int i=2;
    while(i<=2*n)
    {
        T=T*x*x;
        M=M*(i-1);
        S=S+T/M;
        i=i+2;
    }
    cout<<S;
    return 0;
}
