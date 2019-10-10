// S(k,n)=1^k+2^k+...+n^k
#include <iostream>
#include <math.h>
using namespace std;
long Tong(int,int);
int main()
{
    int k,n;
    cin>>k>>n;
    long kq=Tong(k,n);
    cout<<kq;
    return 0;
}
long Tong(int k,int n)
{
    long S=0;
    int i=1;
    while(i<=n)
    {
        S=S+pow(i,k);
        i++;
    }
    return S;
}
