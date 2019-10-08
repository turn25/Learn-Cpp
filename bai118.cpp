//Tinh so hang thu n cua day a1=2 ; an=(-9*a(n-1)-24)/(5*a(n-1)+13) (n>=2)
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
        ahh=(float)(-9*at-24)/(5*at+13);
        i++;
        at=ahh;
    }
    cout<<ahh;
    return 0;
}