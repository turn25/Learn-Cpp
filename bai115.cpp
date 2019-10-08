//Tinh so hang thu n cua day a0=-1; a1=3 ; an+1=5a(n) +6*a(n-1) (n>=1)
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n,ahh;
    cin>>n;
    int att=-1;
    int at=3;
    int i=1;
    while (i<=n)
    {
        ahh=5*at+6*att;
        i++;
        att=at;
        at=ahh;
    }
    cout<<ahh;
    return 0;
}