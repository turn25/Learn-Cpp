// Tong cac chu so chu so cua so nguyen duong n
#include <iostream>
using namespace std;
int TongCacChuSo(int);
int main()
{
    int n;
    do
    {
        cout<<"Nhap n: ";
        cin>>n;
    }
    while(n<=0);
    int kq=TongCacChuSo(n);
    cout<<"Tong cac chu so cua "<<n<<" la: "<<kq<<endl;
    return 0;
}
int TongCacChuSo(int n)
{
    if(n>0)
        return n%10+TongCacChuSo(n/10);
}