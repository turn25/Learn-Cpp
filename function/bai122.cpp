//Tinh so hang thu n cua day a1=1; b1=1; ak=3*b(k-1) +2*a(k-1); bk= a(k-1) +3*b(k-1) (k>=2)
#include <iostream>
#include <cmath>
using namespace std;
void SoHangN(int);
int main()
{
    int n;
    cin>>n;
    SoHangN(n);
    return 0;
}
void SoHangN(int n)
{
    int ahh=0;
    int bhh=0;
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
}