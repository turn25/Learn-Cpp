#include <iostream>
using namespace std;
void nhap(float[], int &);
void xuat(float[], int);
void daonguocchieu(float[], int );

int main()
{
    float a[50];
    int n;
    nhap(a, n);
    xuat(a,n);
    daonguocchieu(a,n);
    return 0;
}
void nhap(float a[], int &n)
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
void xuat(float a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
void daonguocchieu(float a[],int n)
{
    cout<<"mang dao nguoc chieu la: ";
    for(int i=n;i>=0;i--)
    {
        cout<<a[i]<< " ";
    }
}