// Tim chu so nho nhat cua so nguyen duong n
#include <iostream>
#include <math.h>
using namespace std;
int NhoNhat(int);
int main()
{
    int n;
    cin>>n;
    int kq=NhoNhat(n);
    cout<<kq;
    return 0;
}
int NhoNhat(int n)
{
    n=abs(n);
    int lc=n%10;
    int t=n;
    while(t!=0)
    {
        int dv=t%10;
        if (dv<lc)
            lc=dv;
        t=t/10;
    }
    return lc;
}