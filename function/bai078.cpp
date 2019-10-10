// S(x,n)=1+x+x^2+...+x^n
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
    int i=0;
    while(i<=n)
    {
        S=S+pow(x,i);        
        i++;
    }
    return S;
}
