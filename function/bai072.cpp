// S(n)=1+1/(1+2)+...+1/(1+2+...+n)
#include <iostream>
#include <math.h>
using namespace std;
float Tong(int);
int main()
{
    int n;
    cin>>n;
    float kq=Tong(n);
    cout<<kq;
    return 0;
}
float Tong(int n)
{
    float S=0;
    float M=0;
    int i=1;
    while(i<=n)
    {
        M=M+i;
        S=S+(float)1/M;
        i++;
    }
    return S;
}
