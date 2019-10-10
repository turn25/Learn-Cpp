//S(n)=1/(1+1/(1+1/1+...1/(1+1)))
#include <iostream>
#include <cmath>
using namespace std;
float PhanSo(int);
int main()
{
    int n;
    cin>>n;
    float kq=PhanSo(n);
    cout<<kq;
    return 0;
}
float PhanSo(int n)
{
    float S=0;
    int i=1;
    while(i<=n)
    {
        S=(float)1/(1+S);
        i++;
    }
    return S;
}