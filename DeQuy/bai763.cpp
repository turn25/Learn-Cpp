// Cho so nguyen duong n.Kiem tra co toan chu so chan hay khong
#include <iostream>
using namespace std;
int ToanChuSoChan(int);
int main()
{
    int n;
    do
    {
        cout<<"Nhap n: ";
        cin>>n;
    }
    while(n<=0);
    int kq=ToanChuSoChan(n);
    if (kq==1)
        cout<<n<<" la so toan chan."<<endl;
    else
        cout<<n<<" khong la so toan chan."<<endl;
    return 0;
}
int ToanChuSoChan(int n)
{
    if(n%2!=0&&n!=0)
        return 0;
    if(n>0)
        return ToanChuSoChan(n/10);
    return 1;
}