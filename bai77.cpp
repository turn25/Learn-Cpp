// S(k,n)=1^k+2^k+...+n^k
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int k,n;
    cin>>k>>n;
    long S=0;
    int i=1;
    while(i<=n)
    {
        S=S+pow(i,k);
        i++;
    }
    cout<<S;
    return 0;
}
