// S=x^n
#include <iostream>
#include <math.h>
using namespace std;
long LuyThua(int,int);
int main()
{
    int x,n;
    cin>>x>>n;
    long kq=LuyThua(x,n);
    cout<<kq;
    return 0;
}
long LuyThua(int x,int n)
{
    long T=1;
    int i=1;
    while(i<=n)
    {
        T=T*x;
        i++;
    }
    return T;
}
