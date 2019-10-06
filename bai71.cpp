// S(x,n)=x+x^3+...+x^(2n+1)
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int x,n;
    cin>>x>>n;
    long S=x;
    long T=x;
    int i=3;
    while(i<=2*n+1)
    {
        T=T*x*x;
        S=S+T;
        i=i+2;
    }
    cout<<S;
    return 0;
}
