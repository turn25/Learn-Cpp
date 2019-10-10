// Tinh tich tat ca uoc so le cua so nguyen duong n
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
        if(n%i==0)
            T=T*i;
        i=i+2;
    }
    return T;
}