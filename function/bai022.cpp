// Tim chu so don vi cua so nguyen duong n
#include <iostream>
#include <math.h>
using namespace std;
int DonVi(int);
int main()
{
    int n;
    cin>>n;
    int kq=DonVi(n);
    cout<<kq;
    return 0;
}
int DonVi(int n)
{
    int dv=n%10;
    return dv;
}