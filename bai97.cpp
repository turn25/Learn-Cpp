// S(x,n)=sqrt(x^n+sqrt(x^(n-1)+...+sqrt(x)))
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int x,n;
    cin>>x>>n;
    float S=0;
    long T=1;
    int i=1;
    while(i<=n)
    {
        T=T*x;
	S=sqrt(T+S);
	i++;
    }
    cout<<S;
    return 0;
}
