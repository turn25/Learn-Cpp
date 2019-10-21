// Tich cac chu so le chu so cua so nguyen duong n
#include <iostream>
using namespace std;
int TichCacChuSoLe(int);
int main()
{
    int n;
    do
    {
        cout<<"Nhap n: ";
        cin>>n;
    }
    while(n<=0);
    int kq=TichCacChuSoLe(n);
    cout<<"Tich cac chu so le cua "<<n<<" la: "<<kq<<endl;
    return 0;
}
int TichCacChuSoLe(int n)
{
    if (n==0)
        return 1;
    if(n>0)
    {
        if((n%10)%2!=0)
            return n%10*TichCacChuSoLe(n/10);
        return TichCacChuSoLe(n/10); 
    }
    return 0;   
}