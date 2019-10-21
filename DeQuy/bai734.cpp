// S(n)=1+1/3+1/5+...+1/(2n+1)
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
        return 1;
    float S = Tong(int (n-1));
    return S+(float)1/(2*n+1);
}