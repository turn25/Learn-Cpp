// S(x,n)=sinx+sin(x^2)+sin^n(x^n)
#include <iostream>
#include <math.h>
using namespace std;
float Tong(int,int);
int main()
{
    int x,n;
    cin>>x>>n;
    float kq=Tong(x,n);
    cout<<kq;
    return 0;
}
float Tong(int x,int n)
{
    float T=1;
    float S=0;
    int i=1;
    while(i<=n)
    {
        T=sin(pow(x,i));
        S=S+T;        
        i++;
    }
    return S;
}
