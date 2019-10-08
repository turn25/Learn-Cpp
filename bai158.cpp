//Dem chu so lon nhat cua so nguyen duong n
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int dem=0;
    int lc=n%10;
    for(int t=n;t!=0;t=t/10)
    {
        int dv=t%10;
        if(lc<dv)
            dv=lc;
    }
    for(int t=n;t!=0;t=t/10)
    {
        int dv=t%10;
        if(lc==dv)
            dem++;
    }
    cout<<dem;
    return 0;
}