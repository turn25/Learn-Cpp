// S(n)=1/(1+1/(1+1/1+...1/(1+1)))
#include <iostream>
#include <cmath>
using namespace std;
float Tong(int);
int main()
{
    int n;
    cout<<"Nhap n: ";
    cin>>n;
    float kq=Tong(n);
    cout<<kq;
    return 0;
}
float Tong(int n)
{
    if (n==0)
        return 1;
    float S=Tong(n-1);
    return ((float)1/(1+S));
}