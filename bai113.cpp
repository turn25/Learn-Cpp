//Tinh so hang thu n cua day a1=2 ; an=a(n-1) +2n +1(n>=2)
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n,ahh;
    cin>>n;
    int at=2;
    int i=2;
    while (i<=n)
    {
        ahh=at+2*i+1;
        i++;
        at=ahh;
    }
    cout<<ahh;
    return 0;
}