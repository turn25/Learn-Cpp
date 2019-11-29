#include <iostream>
using namespace std;
void nhap(int[], int &);
void xuat(int[], int);
int xuatNT(int[], int);
int main()
{
    int a[50];
    int n;
    nhap(a, n);
    xuat(a, n);
    cout << xuatNT(a, n);
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
        a[i];
}
int xuatNT(int a[], int n)
{

    for (int i = 0; i < n; i++)
    {
        int dem = 0;
        for (int j = 1; j <= a[i]; j++)
        {
            if (a[i] % j == 0)
                dem++;
        }
        if (dem == 2)
            return a[i];
    }
    return -1;
}