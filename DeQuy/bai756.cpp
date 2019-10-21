// Tong cac chu so chan chu so cua so nguyen duong n
#include <iostream>
using namespace std;
int TongCacChuSoChan(int);
int main()
{
    int n;
    do
    {
        cout<<"Nhap n: ";
        cin>>n;
    }
    while(n<=0);
    int kq=TongCacChuSoChan(n);
    cout<<"Tong cac chu so chan cua "<<n<<" la: "<<kq<<endl;
    return 0;
}
int TongCacChuSoChan(int n)
{
    if(n>0)
    {
        if((n%10)%2==0)
            return n%10+TongCacChuSoChan(n/10);
        return TongCacChuSoChan(n/10); 
    }
    return 0;   
}