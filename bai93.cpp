// S(n)=sqrt(2+sqrt(2+...+sqrt(2)))
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
        S=sqrt(2+S);
	i++;
    }
    cout<<S;
    return 0;
}
