// Dem so luong uoc so chan cua so nguyen duong n
#include <iostream>
#include <math.h>
using namespace std;
int DemUocSo(int);
int main()
{
    int n;
    cin>>n;
    int kq=DemUocSo(n);
    cout<<kq;
    return 0;
}
int DemUocSo(int n)
{
    int dem=0;
    int i=2;
    while(i<=n)
    {
        if(n%i==0)
            dem++;
        i=i+2;
    }
    return dem;
}
