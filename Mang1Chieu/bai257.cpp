#include <iostream>
using namespace std;
void nhap(float[], int &);
void xuat(float[], int);
void vitriletang(float[], int);
int main()
{
    float a[50];
    int n;
    nhap(a, n);
    xuat(a, n);
    vitriletang(a, n);
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
void vitriletang(float a[], int n)
{
    for (int i = 1; i < n - 2; i++)
    {
            for (int j = i + 2; j < n - 1; j++)
            {
                float temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
    }
    cout << "duoc sap xep cac vi tri le tang dan thanh: ";
    xuat(a, n);
}
