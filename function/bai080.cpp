// S(x,n)=1+2x+3x^2+..+(n+1)*x^n
#include <iostream>
#include <math.h>
using namespace std;
long Tong(int,int);
int main()
{
    int x,n;
    cin>>x>>n;
    long kq=Tong(x,n);
    cout<<kq;
    return 0;
}
long Tong(int x,int n)
{
    long S=1;
    long T=1;
    int i=1;
    while(i<=n)
    {
        T=pow(x,i)*(i+1);
        S=S+T;        
        i++;
    }
    return S;
}
