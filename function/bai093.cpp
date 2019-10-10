// S(n)=sqrt(2+sqrt(2+...+sqrt(2)))
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
        S=sqrt(2+S);
	i++;
    }
    return S;
}
