// Dem so luong uoc so cua so nguyen duong n
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
    int i=1;
    while(i<=n)
    {
        if(n%i==0)
            dem++;
        i++;
    }
    return dem;
}
