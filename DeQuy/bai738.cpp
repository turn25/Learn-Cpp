// T(n)=1x2x3x...xn
#include <iostream>
#include <cmath>
using namespace std;
long Tich(int);
int main()
{
    cout<<"Nhap n: ";
    int n;
    cin>>n;
    long kq=Tich(n);
    cout<<"Tich la: "<<kq<<endl;
    return 0;
}
long Tich(int n)
{
    if (n==0)
        return 1;
    long T = Tich(int (n-1));
    return T*n;
}