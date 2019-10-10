//Tim boi chung nho nhat cua 2 so nguyen duong a,b
#include <iostream>
#include <cmath>
using namespace std;
int BoiChungNN(int,int);
int main()
{
    int a,b;
    cin>>a>>b;
    int kq=BoiChungNN(a,b);
    cout<<kq;
    return 0;
}
int BoiChungNN(int a,int b)
{
    int m=abs(a);
    int n=abs(b);
    while(m*n!=0)
    {
        if(m>n)
            m=m-n;
        else
            n=n-m;
    }
    int bcnn=abs(a*b)/(m+n);
    return bcnn;
}