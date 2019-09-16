// S=1+1/2+1/3+...+1/n
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    float S=0;
    float i=1;
    while (i<=n)
    {
        S=S+1/i;
        i=i+1;
    }
    cout<<S;
    return 0;
}
