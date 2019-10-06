// S(x,n)=sinx+sin(x^2)+sin^n(x^n)
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
        T=sin(pow(x,i));
        S=S+T;        
        i++;
    }
    cout<<S;
    return 0;
}
