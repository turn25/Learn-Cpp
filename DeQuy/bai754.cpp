// Tich Cac Chu So cua so nguyen duong n
#include <iostream>
using namespace std;
int TichCacChuSo(int);
int main()
{
    int n;
    do
    {
        cout<<"Nhap n: ";
        cin>>n;
    }
    while(n<=0);
    int kq=TichCacChuSo(n);
    cout<<"Tich cac chu so cua "<<n<<" la: "<<kq<<endl;
    return 0;
}
int TichCacChuSo(int n)
{
    if (n==0)
        return 1;
    if(n>0)
        return n%10*TichCacChuSo(n/10);
}