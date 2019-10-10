//Kiem tra so tu nhien n co phai so chinh phuong
#include <iostream>
#include <cmath>
using namespace std;
int SoChinhPhuong(int);
int main()
{
    int n;
    cin>>n;
    int kq=SoChinhPhuong(n);
    if(kq==1)
        cout<<"CP";
    else
        cout<<"KO CP";
    return 0;
}
int SoChinhPhuong(int n)
{
    int flag=0;
    for(int i=1;i<=n;i++)
    {
        if(i*i==n)
        flag=1;
    }
    return flag;
}