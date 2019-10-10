// S(x,n)=1/x+1/(x*(x+1))+...+1/(x*(x+1)*...*(x+n))
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
    float S=(float)1/x;
    float M=1;
    int i=1;
    while(i<=n)
    {
        M=M*(x+i);
        S=S+(float)1/M;        
        i++;
    }
    return S;
}
