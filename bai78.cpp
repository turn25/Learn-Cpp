// S(x,n)=1+x+x^2+...+x^n
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int x,n;
    cin>>x>>n;
    long S=0;
    int i=0;
    while(i<=n)
    {
        S=S+pow(x,i);        
        i++;
    }
    cout<<S;
    return 0;
}
