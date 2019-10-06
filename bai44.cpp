// S=1/(1*2*3*4)+1/(2*3*4*5)+...+1/(n*(n+1)*(n+2)*(n+3))
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    float S=0;
    int i=1;
    while(i<=n)
    {
        S=S+(float)1/(i*(i+1)*(i+2)*(i+3));
        i++;
    }
    cout<<S;
    return 0;
}
