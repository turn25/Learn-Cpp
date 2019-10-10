//Tinh so hang thu n cua day f0=1; f1=1; fn=f(n-1)+f(n-2) (n>=2)
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
    int fhh=0;
    int ftt=1;
    int ft=1;
    int i=2;
    while (i<=n)
    {
        fhh=ftt+ft;
        i++;
        ftt=ft;
        ft=fhh;
    }
    return fhh;
}