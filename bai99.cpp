// S(n)=can n+1 cua (n + can n cua (n-1 +...+ can 2 cua 1))
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    float S=0;
    int i=1;
    while(i<=n)
    {
	S=pow(i+S,(float)1/(i+1));
	i++;
    }
    cout<<S;
    return 0;
}
