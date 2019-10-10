// S(n)=sqrt(n!+sqrt((n-1)!+...+sqrt(1!)))
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
    long T=1;
    int i=1;
    while(i<=n)
    {
        T=T*i;
	S=sqrt(T+S);
	i++;
    }
    return S;
}
