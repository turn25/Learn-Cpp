// S=1/(1*2)+1/(2*3)+...+1/n*(n+1)
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
        S=S+1.0/(i*(i+1));
        i++;
    }
    cout<<S;
    return 0;
}
