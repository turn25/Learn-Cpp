// Tinh tong tat ca uoc so chan cua so nguyen duong n
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int S=0;
    int i=2;
    while(i<=n)
    {
        if(n%i==0)
            S=S+i;
        i=i+2;
    }
    cout<<S;
    return 0;
}
