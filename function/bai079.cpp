// S(n)=1*1!+2*2!+...+n*n!
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
    long S=0;
    long T=1;
    int i=1;
    while(i<=n)
    {
        T=T*i;
        S=S+i*T;        
        i++;
    }
    return S;
}
