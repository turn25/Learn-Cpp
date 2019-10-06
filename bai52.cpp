// Dem so luong uoc so cua so nguyen duong n
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int dem=0;
    int i=1;
    while(i<=n)
    {
        if(n%i==0)
            dem++;
        i++;
    }
    cout<<dem;
    return 0;
}
