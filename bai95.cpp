// S(n)=sqrt(1+sqrt(2+...+sqrt(n)))
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    float S=0;
    int i=n;
    while(i>=1)
    {
        S=sqrt(i+S);
	    i--;
    }
    cout<<S;
    return 0;
}
