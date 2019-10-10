// S=1+1/3+1/5+...+1/(2n+1)
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
    int i=1;
    while (i<=2*n+1)
    {
        S=S+1.0/i;
        i=i+2;
    }
    return S;
}
