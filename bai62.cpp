// Tinh tong cac chu so chan cua so nguyen duong n
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int S=0;
    int t=n;
    while(t!=0)
    {
        int dv=t%10;
        if (dv%2==0)
            S=S+dv;
        t=t/10;
    }
    cout<<S;
    return 0;
}
