// S=(1+1/1^2)*(1+1/2^2)*...*(1+1/n^2)
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    float T=1;
    int i=1;
    while(i<=n)
    {
        T=T*(1+(float)1/(i*i));
        i++;
    }
    cout<<T;
    return 0;
}
