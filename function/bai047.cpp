
// S=sqrt(1+1/1^2+1/2^2)+..+sqrt(1+1/n^2+1/(n+1)^2)
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
    while(i<=n)
    {
        S=sqrt(1+(float)1/(i*i)+(float)1/((i+1)*(i+1)));
        i++;
    }
    return S;
}
