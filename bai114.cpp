//Tinh so hang thu n cua day a1=-2 ; an=5a(n-1) +2*3^n -6*7^n +12(n>=2)
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n,ahh;
    cin>>n;
    int at=-2;
    int i=2;
    while (i<=n)
    {
        ahh=5*at+2*pow(3,i)-6*pow(7,i)+12;
        i++;
        at=ahh;
    }
    cout<<ahh;
    return 0;
}