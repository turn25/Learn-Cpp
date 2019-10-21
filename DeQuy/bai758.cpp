// Cho so nguyen duong n.Tim chu so dau tien cua n
#include <iostream>
using namespace std;
int SoDauTien(int);
int main()
{
    int n;
    do
    {
        cout<<"Nhap n: ";
        cin>>n;
    }
    while(n<=0);
    int kq=SoDauTien(n);
    cout<<"So dau tien cua "<<n<<" la: "<<kq<<endl;
    return 0;
}
int SoDauTien(int n)
{
    if(n/10==0)
        return n;
    return SoDauTien(n/10);
}