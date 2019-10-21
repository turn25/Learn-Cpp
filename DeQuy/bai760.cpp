// Cho so nguyen duong n.Tim chu so lon nhat cua n
#include <iostream>
using namespace std;
int SoLonNhat(int,int);
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
    int kq=SoLonNhat(n,lc);
    cout<<"So lon nhat cua "<<n<<" la: "<<kq<<endl;
    return 0;
}
int SoLonNhat(int n,int lc)
{
    if(n%10==0)
        return lc;
    if (lc<n%10)
        lc=n%10;
    return SoLonNhat(n/10,lc);
}