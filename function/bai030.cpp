// S=1/2+1/4+1/6+...+1/2n
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
    int i=2;
    while (i<=2*n)
    {
        S=S+1.0/i;
        i=i+2;
    }
    return S;
}
