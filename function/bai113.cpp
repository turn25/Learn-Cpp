//Tinh so hang thu n cua day a1=2 ; an=a(n-1) +2n +1(n>=2)
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
    int at=2;
    int i=2;
    while (i<=n)
    {
        ahh=at+2*i+1;
        i++;
        at=ahh;
    }
    return ahh;
}