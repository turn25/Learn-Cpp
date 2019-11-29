// Cho so nguyen duong n.Tim chu so dao nguoc cua n
#include <iostream>
using namespace std;
int SoDaoNguoc(int);
int main()
{
    int n;
    do
    {
        cout<<"Nhap n: ";
        cin>>n;
    }
    while(n<=0);
    int kq=SoDaoNguoc(n);
    cout<<"So dao nguoc cua "<<n<<" la: "<<kq<<endl;
    return 0;
}
int SoDaoNguoc(int n)
{
    if(n>0)
        return SoDaoNguoc(n%10)*10+n/10;
}