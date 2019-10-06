// S=x*(x+1)*...*(x+n)
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int x,n;
    cin>>x>>n;
    long S=x;
    int i=1;
    while(i<=n)
    {
        S=S+(x+i);
        i++;
    }
    cout<<S;
    return 0;
}
