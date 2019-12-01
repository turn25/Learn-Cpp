#include <iostream>
using namespace std;
void nhap(int[], int &);
void xuat(int[], int);
void hoanvi(int &, int &);
void daonguocchieu(int[], int );

int main()
{
    int a[50];
    int n;
    nhap(a, n);
    daonguocchieu(a,n);
    return 0;
}
void nhap(int a[], int &n)
{
    do
    {
        cout << "Nhap so phan tu ";
        cin >> n;
    } while (n < 0);
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap a[" << i << "]: ";
        cin >> a[i];
    }
}
void xuat(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
void hoanvi(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}
void daonguocchieu(int a[],int n)
{
    cout<<"mang dao nguoc chieu so chan la: ";
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
            {
                if(a[j]%2==0&&a[i]%2==0)
                    hoanvi(a[i],a[j]);
            }
    }
    xuat(a,n);
}