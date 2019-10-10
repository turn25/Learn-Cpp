// S=1^2+2^2+3^2+...+n^2
#include <iostream>
#include <math.h>
using namespace std;
int Tong(int);
int main()
{
    int n;
    cin>>n;
    int kq=Tong(n);
    cout<<kq;
    return 0;
}
int Tong(int n)
{
    int S=0;
    int i=1;
    while (i<=n)
    {
        S=S+i*i;
        i=i+1;
    }
    return S;
}
