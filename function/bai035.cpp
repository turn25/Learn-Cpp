// S=1*2*3*...*n
#include <iostream>
#include <math.h>
using namespace std;
long Tich(int);
int main()
{
    int n;
    cin>>n;
    long kq=Tich(n);
    cout<<kq;
    return 0;
}
long Tich(int n)
{
    long T=1;
    int i=1;
    while(i<=n)
    {
        T=T*i;
        i++;
    }
    return T;
}
