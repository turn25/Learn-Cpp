//Tinh so hang thu n cua day f0=1; f1=1; fn=f(n-1)+f(n-2) (n>=2)
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n,fhh;
    cin>>n;
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
    cout<<fhh;
    return 0;
}