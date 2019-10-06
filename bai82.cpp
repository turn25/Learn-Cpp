// S(x,n)=sinx+sin^2(x)+sin^n(x)
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int x,n;
    cin>>x>>n;
    float T=1;
    float S=0;
    int i=1;
    while(i<=n)
    {
        T=T*sin(x);
        S=S+T;        
        i++;
    }
    cout<<S;
    return 0;
}
