// S=1^3+2^3+...+n^3
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
    int i=1;
    while(i<=n)
    {
        S=S+(i*i*i);
        i++;
    }
    return S;
}