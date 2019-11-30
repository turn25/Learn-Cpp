#include <iostream>
using namespace std;
void nhap(int[], int &);
void xuat(int[], int);
void sapxepgiam(int[], int);
int main()
{
    int a[50];
    int n;
    nhap(a, n);
    xuat(a, n);
    sapxepgiam(a, n);
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
void xuat (int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
void sapxepgiam(int a[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        for(int j=i+1;j < n; j++)
            if(a[i]<a[j])
            {
                float temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }    
    }
    cout<<"duoc sap xep giam dan thanh: ";
    xuat(a,n);
}
