// Cho so nguyen duong n.Tim chu so nho nhat cua n
#include <iostream>
using namespace std;
int SoNhoNhat(int,int);
int main()
{
    int n;
    do
    {
        cout<<"Nhap n: ";
        cin>>n;
    }
    while(n<=0);
    int lc=n%10;
    int kq=SoNhoNhat(n,lc);
    cout<<"So nho nhat cua "<<n<<" la: "<<kq<<endl;
    return 0;
}
int SoNhoNhat(int n,int lc)
{
    if(n%10==0)
        return lc;
    if (lc>n%10)
        lc=n%10;
    return SoNhoNhat(n/10,lc);
}