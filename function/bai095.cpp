// S(n)=sqrt(1+sqrt(2+...+sqrt(n)))
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
    int i=n;
    while(i>=1)
    {
        S=sqrt(i+S);
	i--;
    }
    return S;
}
