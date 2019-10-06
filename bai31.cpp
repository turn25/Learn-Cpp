// S=1+1/3+1/5+...+1/(2n+1)
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    float S=0;
    int i=1;
    while (i<=2*n+1)
    {
        S=S+1.0/i;
        i=i+2;
    }
    cout<<S;
    return 0;
}
