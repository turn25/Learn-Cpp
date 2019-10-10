// Tim chu so lon nhat cua so nguyen duong n
#include <iostream>
#include <math.h>
using namespace std;
int LonNhat(int);
int main()
{
    int n;
    cin>>n;
    int kq=LonNhat(n);
    cout<<kq;
    return 0;
}
int LonNhat(int n)
{
    n=abs(n);
    int lc=n%10;
    int t=n;
    while(t!=0)
    {
        int dv=t%10;
        if (dv>lc)
            lc=dv;
        t=t/10;
    }
    return lc;
}