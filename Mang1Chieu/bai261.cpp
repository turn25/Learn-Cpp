#include <iostream>
using namespace std;
void nhap(float[], int &);
void xuat(float[], int);
void sapxepduong(float[], int);
int main()
{
    float a[50];
    int n;
    nhap(a, n);
    xuat(a, n);
    sapxepduong(a, n);
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
void sapxepduong(float a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
            if(a[i]>0)
            {
                for (int j = i + 1; j < n; j++)
                {
                    if(a[j]>0)
                    {    
                        float temp = a[i];
                        a[i] = a[j];
                        a[j] = temp;
                    }
                }
            }
    }
    cout << "duoc sap xep cac gia tri duong tang dan thanh: ";
    xuat(a, n);
}
