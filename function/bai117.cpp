//Tinh so hang thu n cua day a0=-1; a1=3 ; an=5*2^n +5*a(n-1) -a(n-2) (n>=2)
#include <iostream>
#include <cmath>
using namespace std;
int SoHangN(int);
int main()
{
    int n;
    cin>>n;
    int kq=SoHangN(n);
    cout<<kq;
    return 0;
}
int SoHangN(int n)
{
    int ahh=0;
    int att=-1;
    int at=3;
    int i=2;
    while (i<=n)
    {
        ahh=5*pow(2,i)+5*at-att;
        i++;
        att=at;
        at=ahh;
    }
    return ahh;
}