// S=x*(x+1)*...*(x+n)
#include <iostream>
#include <math.h>
using namespace std;
long Tich(int,int);
int main()
{
    int x,n;
    cin>>x>>n;
    long kq=Tich(x,n);
    cout<<kq;
    return 0;
}
long Tich(int x,int n)
{
    long T=x;
    int i=1;
    while(i<=n)
    {
        T=T*(x+i);
        i++;
    }
    return T;
}
