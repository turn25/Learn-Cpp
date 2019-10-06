// S=1/2+2/3+...+n/(n+1)
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    float S=0;
    int i=1;
    while (i<=n)
    {
        S=S+(float)i/(i+1);
        i++;
    }
    cout<<S;
    return 0;
}
