// S(n)=can n cua (n+ can n-1 cua (n-1 +...+ can 2 cua 2))
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
    int i=2;
    while(i<=n)
    {
	S=pow(i+S,(float)1/i);
	i++;
    }
    return S;
}
