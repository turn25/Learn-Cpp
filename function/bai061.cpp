// Dem so luong chu so le cua so nguyen duong n
#include <iostream>
#include <math.h>
using namespace std;
int Dem(int);
int main()
{
    int n;
    cin>>n;
    int kq=Dem(n);
    cout<<kq;
    return 0;
}
int Dem(int n)
{
    int dem=0;
    int t=n;
    while(t!=0)
     {
        int dv=t%10;
        if (dv%2!=0)
            dem++;
        t=t/10;
    }
    return dem;
}