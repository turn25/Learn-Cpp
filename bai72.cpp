// S(n)=1+1/(1+2)+...+1/(1+2+...+n)
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    float S=0;
    float M=0;
    int i=1;
    while(i<=n)
    {
        M=M+i;
        S=S+(float)1/M;
        i++;
    }
    cout<<S;
    return 0;
}
