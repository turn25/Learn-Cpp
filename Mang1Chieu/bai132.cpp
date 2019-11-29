#include <iostream>
using namespace std;
void nhap (int [],int &);
void xuat (int [],int );
int main()
{
    int a[50];
    int n;
    nhap(a,n);
    xuat(a,n);
    return 0;
}
void nhap (int a[],int &n)
{
    cout<<"Nhap so phan tu ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Nhap a["<<i<<"]: ";
        cin>>a[i];
    }
}
void xuat (int a[],int n)
{
    for (int i=0;i<n;i++)
    {
        if (a[i]%2==0)
            cout<<a[i]<<" ";
    }
}