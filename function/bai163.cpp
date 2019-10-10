//Tim uoc so le lon nhat cua so nguyen duong n
#include <iostream>
#include <cmath>
using namespace std;
int UocSoLeLN(int);
int main()
{
    int n;
    cin>>n;
    int kq = UocSoLeLN(n);
    cout<<kq;
    return 0;
}
int UocSoLeLN(int n)
{
    int t=n;
    while(t%2==0)
        t=t/2;
    return t;
}