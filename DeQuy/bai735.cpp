// S(n)=1/(1x2)+1/(2x3)+...+1/(nx(n+1))
#include <iostream>
#include <cmath>
using namespace std;
float Tong(int);
int main()
{
    cout<<"Nhap n: ";
    int n;
    cin>>n;
    float kq=Tong(n);
    cout<<"Tong la: "<<kq<<endl;
    return 0;
}
float Tong(int n)
{
    if (n==0)
        return 0;
    float S = Tong(int (n-1));
    return S+(float)1/(n*(n+1));
}