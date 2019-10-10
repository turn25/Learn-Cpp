// S(x,n)=sqrt(x^n+sqrt(x^(n-1)+...+sqrt(x)))
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
    float S=0;
    long T=1;
    int i=1;
    while(i<=n)
    {
        T=T*x;
	S=sqrt(T+S);
	i++;
    }
    return S;
}
