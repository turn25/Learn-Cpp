#include <iostream>
using namespace std;
void nhap(int[], int &);
void xuat(int[], int);
void nguyentotang(int[], int);
int ktnguyento(int[]);
int main()
{
    int a[50];
    int n;
    nhap(a, n);
    xuat(a, n);
    nguyentotang(a, n);
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
int ktnguyento(int n)
{
    int dem = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            dem++;
    }
    if (dem == 2)
        return 1;
    return 0;
}
void nguyentotang(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (ktnguyento(a[i]) == 1)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (ktnguyento(a[j]) == 1)
                {
                    if(a[i]>a[j])
                    {
                        float temp = a[i];
                        a[i] = a[j];
                        a[j] = temp;
                    }
                }
            }
        }
    cout << "duoc sap xep cac so nguyen to tang dan thanh: ";
    xuat(a, n);
    }
}