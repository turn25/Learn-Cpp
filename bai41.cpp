// S=1*2*3+2*3*4+...+n*(n+1)*(n+2)
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long S=0;
    int i=1;
    while(i<=n)
    {
        S=S+i*(i+1)*(i+2);
        i++;
    }
    cout<<S;
    return 0;
}
