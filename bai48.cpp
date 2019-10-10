// S=x*(x+1)*...*(x+n)
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int x,n;
    cin>>x>>n;
    long T=x;
    int i=1;
    while(i<=n)
    {
        T=T*(x+i);
        i++;
    }
    cout<<T;
    return 0;
}
