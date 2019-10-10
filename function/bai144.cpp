//Kiem tra so nguyen duong n co phai so nguyen to
#include <iostream>
#include <cmath>
using namespace std;
int SoNguyenTo(int);
int main()
{
    int n;
    cin>>n;
    int kq=SoNguyenTo(n);
    if(kq==2)
        cout<<"SNT";
    else
        cout<<"KO la SNT";
    return 0;
}
int SoNguyenTo(int n)
{
    int dem=0;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
            dem++;
    }
    return dem;
}