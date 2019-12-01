#include <iostream>
using namespace std;
void nhap(float[], int &);
void xuat(float[], int);
int timlonnhat(float [], int);
void xoavitri(float[], int &, int);
void xoalonnhat(float [],int &);
int main()
{
    float a[50];
    int n;
    nhap(a, n);
    xoalonnhat(a,n);
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
int timlonnhat(float a[], int n)
{
    float ln = a[0];
    for (int i = 0; i < n; i++)
        if (a[i] > ln)
        {
            ln = a[i];      
        }
    return ln;
}
void xoavitri(float a[], int &n, int k)
{
    for (int i = k; i < n; i++)
        a[i] = a[i + 1];
    n--;
}
void xoalonnhat(float a[],int &n)
{
    float soLN=timlonnhat(a,n);
    for (int i=0;i<n;i++)
    {
        if(a[i]==soLN)
            xoavitri(a,n,i);
    }
}