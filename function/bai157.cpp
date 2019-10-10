//Xuat day gia tri a0,...,a(n) voi a(i)=1+1/2+...1/n
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
    float at=0;
    for(int i=1;i<=n;i++)
    {
        at=at+(float)1/i;
        cout<<at<<" ";
    }
}