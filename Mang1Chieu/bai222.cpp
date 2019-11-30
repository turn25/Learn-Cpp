#include <iostream>
using namespace std;
void nhap(int[], int &);
void demcuctri(int[], int);
int main()
{
    int a[50];
    int n;
    nhap(a, n);
    demcuctri(a, n);
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
void demcuctri(int a[], int n)
{
    int dem = 0;
    for (int i = 1; i < n-1; i++)
    {
        if (a[i] > a[i - 1] && a[i] > a[i + 1])
            dem++;
        if (a[i] < a[i - 1] && a[i] < a[i + 1])
            dem++;
    }
    cout << "So cuc tri la: " << dem << endl;
}