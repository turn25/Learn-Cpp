// S(n)=1!+2!+...+n!
#include <iostream>
#include <math.h>
using namespace std;
long Tong(int);
int main()
{
    int n;
    cin>>n;
    long kq=Tong(n);
    cout<<kq;
    return 0;
}
long Tong(int n)
{
    long S=0;
    long T=1;
    int i=1;
    while(i<=n)
    {
        T=T*i;
        S=S+T;
        i++;
    }
    return S;
}
