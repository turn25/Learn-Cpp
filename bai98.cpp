// S(n)=can n cua (n+ can n-1 cua (n-1 +...+ can 2 cua 2))
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    float S=0;
    int i=2;
    while(i<=n)
    {
	S=pow(i+S,(float)1/i);
	i++;
    }
    cout<<S;
    return 0;
}
