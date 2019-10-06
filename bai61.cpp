// Dem so luong chu so le cua so nguyen duong n
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int dem=0;
    int t=n;
    while(t!=0)
    {
        int dv=t%10;
        if (dv%2!=0)
            dem++;
        t=t/10;
    }
    cout<<dem;
    return 0;
}
