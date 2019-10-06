// S(x,n)=x+x^2+...+x^n
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int x,n;
    cin>>x>>n;
    long S=0;
    long T=1;
    int i=1;
    while(i<=n)
    {
        T=T*x;
        S=S+T;
        i++;
    }
    cout<<S;
    return 0;
}
