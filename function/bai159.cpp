//Dem chu so nho nhat cua so nguyen duong n
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
    int dem=0;
    int lc=n%10;
    for(int t=n;t!=0;t=t/10)
    {
        int dv=t%10;
        if(lc>dv)
            dv=lc;
    }
    for(int t=n;t!=0;t=t/10)
    {
        int dv=t%10;
        if(lc==dv)
            dem++;
    }
    return dem;
}