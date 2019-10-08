//Tinh so hang thu n cua day a0=1; a1=2 ; an+1=4a(n) +a(n-1) (n>=1)
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n,ahh;
    cin>>n;
    int att=1;
    int at=2;
    int i=1;
    while (i<=n)
    {
        ahh=4*at+att;
        i++;
        att=at;
        at=ahh;
    }
    cout<<ahh;
    return 0;
}