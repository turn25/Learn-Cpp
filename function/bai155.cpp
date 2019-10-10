//Xuat day gia tri a0,...,a(n) voi a(i)=2^(i+1)
#include <iostream>
#include <cmath>
using namespace std;
void Day(int);
int main()
{
    int n;
    cin>>n;
    Day(n);
    return 0;
}
void Day(int n)
{
    int at=2;
    for(int i=1;i<=n;i++)
    {
        at=at*2;
        cout<<at<<" ";
    }
}