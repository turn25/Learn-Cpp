// Tinh tich cac chu so le cua so nguyen duong n
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int T=1;
    int t=n;
    while(t!=0)
    {
        int dv=t%10;
        if (dv%2!=0)
            T=T*dv;
        t=t/10;
    }
    cout<<T;
    return 0;
}
