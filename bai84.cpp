// S(x,n)=sinx+sinsinx+...+sinsin...sinx
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int x,n;
    cin>>x>>n;
    float T=x;
    float S=0;
    int i=1;
    while(i<=n)
    {
        T=sin(T);
        S=S+T;        
        i++;
    }
    cout<<S;
    return 0;
}
