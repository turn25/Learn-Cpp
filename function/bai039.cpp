// S=(1+1/1^2)*(1+1/2^2)*...*(1+1/n^2)
#include <iostream>
#include <math.h>
using namespace std;
float Tich(int);
int main()
{
    int n;
    cin>>n;
    float kq=Tich(n);
    cout<<kq;
    return 0;
}
float Tich(int n)
{
    float T=1;
    int i=1;
    while(i<=n)
    {
        T=T*(1+(float)1/(i*i));
        i++;
    }
    return T;
}
