//Tinh so hang thu n cua day a1=2 ; an=(a(n-1)^2 +2)/(2*a(n-1)) (n>=2)
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
        ahh=(float)(pow(at,2)+2)/(2*at);
        i++;
        at=ahh;
    }
    cout<<ahh;
    return 0;
}