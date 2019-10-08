//Xuat day gia tri a0,...,a(n) voi a(i)=1+1/2+...1/n
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    float at=0;
    for(int i=1;i<=n;i++)
    {
        at=at+(float)1/i;
        cout<<at<<" ";
    }
    return 0;
}