//Tinh so hang thu n cua day a1=2; b1=1; ak=a(k-1)^2 +2*b(k-1)^2; bk= 2*a(k-1) *b(k-1) (k>=2)
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n,ahh,bhh;
    cin>>n;
    int at=2;
    int bt=1;
    int i=2;
    while (i<=n)
    {
        ahh=at*at+2*bt*bt;
        bhh=2*at*bt;
        i++;
        at=ahh;
        bt=bhh;
    }
    cout<<ahh<<" "<<bhh;
    return 0;
}