// S(n)=1!+2!+...+n!
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long S=0;
    long T=1;
    int i=1;
    while(i<=n)
    {
        T=T*i;
        S=S+T;
        i++;
    }
    cout<<S;
    return 0;
}
