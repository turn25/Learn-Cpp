// S(x,n)=sinx+sinsinx+...+sinsin...sinx
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
    float T=x;
    float S=0;
    int i=1;
    while(i<=n)
    {
        T=sin(T);
        S=S+T;        
        i++;
    }
    return S;
}
