// Cho so nguyen duong n.Kiem tra co toan chu so le hay khong
#include <iostream>
using namespace std;
int ToanChuSoLe(int);
int main()
{
    int n;
    do
    {
        cout<<"Nhap n: ";
        cin>>n;
    }
    while(n<=0);
    int kq=ToanChuSoLe(n);
    if (kq==1)
        cout<<n<<" la so toan le."<<endl;
    else
        cout<<n<<" khong la so toan le."<<endl;
    return 0;
}
int ToanChuSoLe(int n)
{
    if(n%2==0&&n!=0)
        return 0;
    if(n>0)
        return ToanChuSoLe(n/10);
    return 1;
}