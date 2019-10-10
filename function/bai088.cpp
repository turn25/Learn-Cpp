// S(n)=1-1/(1+2)+...+(-1)^(n+1)*1/(1+2+...+n)
#include <iostream>
#include <math.h>
using namespace std;
float Tong(int,int);
int main()
{
    int x,n;
    cin>>x>>n;
    float kq=Tong(x,n);
    cout<<kq;
    return 0;
}
float Tong(int x,int n)
{
    float M=0;
    float S=0;
    int dau=1;
    int i=1;
    while(i<=n)
    {
        M=M+i;
        S=S+dau*(float)1/M;
        dau=-dau;
        i++;
    }
    return S;
}
