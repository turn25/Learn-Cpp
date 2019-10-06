// Dem so luong uoc so chan cua so nguyen duong n
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int dem=0;
    int i=2;
    while(i<=n)
    {
        if(n%i==0)
            dem++;
        i=i+2;
    }
    cout<<dem;
    return 0;
}
