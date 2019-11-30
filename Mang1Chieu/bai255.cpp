#include <iostream>
using namespace std;
void nhap(float[], int &);
void xuat(float[], int);
void sapxeptang(float[], int);
int main()
{
    float a[50];
    int n;
    nhap(a, n);
    xuat(a, n);
    sapxeptang(a, n);
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
void xuat (float a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
void sapxeptang(float a[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        for(int j=i+1;j < n; j++)
            if(a[i]>a[j])
            {
                float temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }    
    }
    cout<<"duoc sap xep tang dan thanh: ";
    xuat(a,n);
}
