//S(n)=1/(1+1/(1+1/1+...1/(1+1)))
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
        S=(float)1/(1+S);
        i++;
    }
    cout<<S;
    return 0;
}