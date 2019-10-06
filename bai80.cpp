// S(x,n)=1+2x+3x^2+..+(n+1)*x^n
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int x,n;
    cin>>x>>n;
    long S=1;
    long T=1;
    int i=1;
    while(i<=n)
    {
        T=pow(x,i)*(i+1);
        S=S+T;        
        i++;
    }
    cout<<S;
    return 0;
}
