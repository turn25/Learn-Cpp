#include <iostream>
using namespace std;
void nhap(int[], int &);
void xuat(int[], int);
int xuatHT(int[], int);
int main()
{
    int a[50];
    int n;
    nhap(a, n);
    xuat(a, n);
    cout << xuatHT(a, n);
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
int xuatHT(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int s = 0;
        for (int j = 1; j < a[i]; j++)
        {
            if (a[i] % j == 0)
                s=s+j;
        }
        if (a[i]==s)
            return a[i];
    }
    return -1;
}