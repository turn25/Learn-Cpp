// T(x,n)=x^n
#include <iostream>
#include <cmath>
using namespace std;
long LuyThua(int, int);
int main()
{
    cout<<"Nhap x: ";
    int x,n;
    cin>>x;
    cout<<"Nhap n: ";
    cin>>n;
    long kq=LuyThua(x,n);
    cout<<x<<" Luy Thua "<<n<<" la : "<<kq<<endl;
    return 0;
}
long LuyThua(int x, int n)
{
    if (n==0)
        return 1;
    long T = LuyThua(x, int(n-1));
    return T*x;
}