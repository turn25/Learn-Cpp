// S(n)=can n+1 cua (n! + can n cua ((n-1)! +...+ can 2 cua 1!))
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
    long T=1;
    float S=0;
    int i=1;
    while(i<=n)
    {
	T=T*i;
        S=pow(T+S,(float)1/(i+1));
	i++;
    }
    return S;
}
