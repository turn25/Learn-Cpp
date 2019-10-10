//Dem chu so dau tien cua so nguyen duong n
#include <iostream>
#include <cmath>
using namespace std;
int Dem(int);
int main()
{
    int n;
    cin>>n;
    int kq = Dem(n);
    cout<<kq;
    return 0;
}
int Dem(int n)
{
    int dv;
    int dem=0;
    for(int t=n;t!=0;t=t/10)
    {
        dv=t%10;
    }
    for(int t=n;t!=0;t=t/10)
    {
        int dv2=t%10;
        if(dv2==dv)
            dem++;
    }
    return dem;
}