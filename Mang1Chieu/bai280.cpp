#include <iostream>
using namespace std;
void nhap(float[], int &);
void xuat(float[], int);
void doicho(float [],int,int);
void doi1vedau(float[], int );

int main()
{
    float a[50];
    int n;
    nhap(a, n);
    doi1vedau(a,n);
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
void doicho(float a[],int n,int vitri)
{
    for(int i=vitri;i>0;i--)
        a[i]=a[i-1];
    a[0]=1;
}
void doi1vedau(float a[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==1)
            doicho(a,n,i);
    }
}
