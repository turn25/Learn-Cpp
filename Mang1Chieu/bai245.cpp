#include <iostream>
using namespace std;
void nhap(int[], int &);
int kttoanchan(int[], int);
int main()
{
    int a[50];
    int n;
    nhap(a, n);
    cout<<kttoanchan(a, n);
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
int kttoanchan(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if(a[i]%2!=0)
            return 0;
    }
    return 1;
}