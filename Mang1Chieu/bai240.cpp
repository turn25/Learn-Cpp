#include <iostream>
using namespace std;
void nhap(int[], int &);
int tontaikhong(int[], int);
int main()
{
    int a[50];
    int n;
    nhap(a, n);
    cout<<tontaikhong(a, n);
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
int tontaikhong(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i]== 0)
            return 0;
    }
    return 1;
}