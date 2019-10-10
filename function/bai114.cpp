//Tinh so hang thu n cua day a1=-2 ; an=5a(n-1) +2*3^n -6*7^n +12(n>=2)
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
    int at=-2;
    int i=2;
    while (i<=n)
    {
        ahh=5*at+2*pow(3,i)-6*pow(7,i)+12;
        i++;
        at=ahh;
    }
    return ahh;
}