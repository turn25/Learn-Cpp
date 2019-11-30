#include <iostream>
using namespace std;
void nhap(float[], int &);
void demgtln(float[], int);
int main()
{
    float a[50];
    int n;
    nhap(a, n);
    demgtln(a, n);
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
void demgtln(float a[], int n)
{
    int dem = 0;
    int ln=0;
    for (int i = 0; i < n; i++)
    {
        if(ln<a[i])
            ln=a[i];
    }
    for (int i=0; i<n;i++)
    {    if(ln==a[i])
            dem++;
    }
    cout << "So luong cac gia tri lon nhat la : " << dem << endl;
}