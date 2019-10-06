// S=1/2+1/4+1/6+...+1/2n
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    float S=0;
    int i=2;
    while (i<=2*n)
    {
        S=S+1.0/i;
        i=i+2;
    }
    cout<<S;
    return 0;
}
