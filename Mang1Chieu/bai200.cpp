#include <iostream>
using namespace std;
void nhap(float[], int &);
void tong(float[], int);
int main()
{
    float a[50];
    int n;
    nhap(a, n);
    tong(a, n);
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
void tong(float a[], int n)
{
    float s = 0;
    for (int i = 0; i < n; i++)
    {
        s = s + a[i];
    }
    cout<<"Tong la: "<<s<<endl;
}