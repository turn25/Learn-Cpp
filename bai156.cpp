//Xuat day gia tri a0,...,a(n) voi a(i)=i!
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int at=1;
    for(int i=1;i<=n;i++)
    {
        at=at*i;
        cout<<at<<" ";
    }
    return 0;
}