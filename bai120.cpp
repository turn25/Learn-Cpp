//Tinh so hang thu n cua day a1=2 ; an=5*a(n-1)+sqrt(24*a(n-1)^2 -8) (n>=2)
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    float ahh;
    cin>>n;
    int at=2;
    int i=2;
    while (i<=n)
    {
        ahh=5*at+sqrt(24*pow(at,2)-8);
        i++;
        at=ahh;
    }
    cout<<ahh;
    return 0;
}