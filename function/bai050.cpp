// Tinh tong tat ca uoc so cua so nguyen duong n
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
    while(i<=n)
    {
        if(n%i==0)
            S=S+i;
        i++;
    }
    return S;
}
