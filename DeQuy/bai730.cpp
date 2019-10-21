//S(n)=1+2+3...+n
#include <iostream>
#include <cmath>
using namespace std;
int Tong(int);
int main()
{
    cout<<"Nhap n: ";
    int n;
    cin>>n;
    int kq=Tong(n);
    cout<<"Tong la: "<<kq<<endl;
    return 0;
}
int Tong(int n)
{
    if (n==0)
        return 0;
    int S = Tong(int (n-1));
    return S+n;
}