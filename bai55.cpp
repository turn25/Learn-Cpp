// Tinh tich tat ca uoc so le cua so nguyen duong n
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int T=1;
    int i=1;
    while(i<=n)
    {
        if(n%i==0)
            T=T*i;
        i=i+2;
    }
    cout<<T;
    return 0;
}
