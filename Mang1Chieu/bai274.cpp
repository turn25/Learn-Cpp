#include <iostream>
using namespace std;
void nhap(int[], int &);
void xuat(int[], int);
void xoavitri(int[], int &, int);
void xoasochan(int [],int &);
int main()
{
    int a[50];
    int n;
    nhap(a, n);
    xoasochan(a,n);
    xuat(a,n);
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
void xoavitri(int a[], int &n, int k)
{
    for (int i = k; i < n; i++)
        a[i] = a[i + 1];
    n--;
}
void xoasochan(int a[],int &n)
{
    for (int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            xoavitri(a,n,i);
            i--;
        }
    }
}