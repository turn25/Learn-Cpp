//Tinh so hang thu n cua day a1=2 ; an=(a(n-1)^2 +2)/(2*a(n-1)) (n>=2)
#include <iostream>
#include <cmath>
using namespace std;
float SoHangN(int);
int main()
{
    int n;
    cin>>n;
    float kq=SoHangN(n);
    cout<<kq;
    return 0;
}
float SoHangN(int n)
{
    float ahh=0;
    int at=2;
    int i=2;
    while (i<=n)
    {
        ahh=(float)(pow(at,2)+2)/(2*at);
        i++;
        at=ahh;
    }
    return ahh;
}