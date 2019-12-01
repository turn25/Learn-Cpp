#include <iostream>
using namespace std;
void nhap(float[], int &);
void xuat(float[], int);
void xoavitri(float[], int &);
int main()
{
    float a[50];
    int n;
    nhap(a, n);
    xoavitri(a, n);
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
void xoavitri(float a[], int &n)
{
    int k;
    cout<<"Nhap vi tri can xoa: ";
    cin>>k;
    for(int i=k; i<n-1;i++)
        a[i] = a[i+1];
    n--;
    xuat(a,n);
}