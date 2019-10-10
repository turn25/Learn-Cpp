// S=1/2+3/4+...+(2n+1)/(2n+2)
#include <iostream>
#include <math.h>
using namespace std;
float Tong(int);
int main()
{
    int n;
    cin>>n;
    float kq=Tong(n);
    cout<<kq;
    return 0;
}
float Tong(int n)
{
    float S=0;
    int i=1;
    while (i<=2*n+1)
    {
        S=S+(float)i/(i+1);
        i=i+2;
    }
    return S;
}
