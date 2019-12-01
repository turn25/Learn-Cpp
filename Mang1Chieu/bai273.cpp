#include <iostream>
using namespace std;
void nhap(float[], int &);
void xuat(float[], int);
void xoavitri(float[], int &, int);
void xoasoam(float [],int &);
int main()
{
    float a[50];
    int n;
    nhap(a, n);
    xoasoam(a,n);
    xuat(a,n);
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
void xoavitri(float a[], int &n, int k)
{
    for (int i = k; i < n; i++)
        a[i] = a[i + 1];
    n--;
}
void xoasoam(float a[],int &n)
{
    for (int i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            xoavitri(a,n,i);
            i--;
        }
    }
}