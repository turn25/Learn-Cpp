//Xuat day gia tri a0,...,a(n) voi a(i)=2^(i+1)
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int at=2;
    for(int i=1;i<=n;i++)
    {
        at=at*2;
        cout<<at<<" ";
    }
    return 0;
}