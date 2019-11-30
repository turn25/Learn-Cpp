#include <iostream>
using namespace std;
void nhap(float[], int &);
void lietkeam(float[], int);
int main()
{
    float a[50];
    int n;
    nhap(a, n);
    lietkeam(a, n);
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
void lietkeam(float a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] <0)
            cout << a[i] << " ";
    }
}