//Xuat day gia tri a0,...,a(n) voi a(i)=i!
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
    int at=1;
    for(int i=1;i<=n;i++)
    {
        at=at*i;
        cout<<at<<" ";
    }
}