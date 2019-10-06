// S(x,n)=1/x+1/(x*(x+1))+...+1/(x*(x+1)*...*(x+n))
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int x,n;
    cin>>x>>n;
    float S=(float)1/x;
    float M=1;
    int i=1;
    while(i<=n)
    {
        M=M*(x+i);
        S=S+(float)1/M;        
        i++;
    }
    cout<<S;
    return 0;
}
