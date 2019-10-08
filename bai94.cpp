// S(n)=sqrt(n+sqrt(n-1+...+sqrt(1)))
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    float S=0;
    int i=1;
    while(i<=n)
    {
        S=sqrt(i+S);
	i++;
    }
    cout<<S;
    return 0;
}
