// S=1/((2*sqrt(1)+1*sqrt(2))+1/((3*sqrt(2)+2*sqrt(3))+...+1/(((n+1)*sqrt(n)+n*sqrt(n+1))
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
        S=S+(float)1/((i+1)*sqrt(i)+i*sqrt(i+1));
        i++;
    }
    return S;
}
