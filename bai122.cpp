//Tinh so hang thu n cua day a1=1; b1=1; ak=3*b(k-1) +2*a(k-1); bk= a(k-1) +3*b(k-1) (k>=2)
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n,ahh,bhh;
    cin>>n;
    int at=1;
    int bt=1;
    int i=2;
    while (i<=n)
    {
        ahh=3*bt+2*at;
        bhh=at+3*bt;
        i++;
        at=ahh;
        bt=bhh;
    }
    cout<<ahh<<" "<<bhh;
    return 0;
}