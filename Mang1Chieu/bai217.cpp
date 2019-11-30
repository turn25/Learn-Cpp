#include <iostream>
using namespace std;
void nhap(int[], int &);
void demchiahetbay(int[], int);
int main()
{
    int a[50];
    int n;
    nhap(a, n);
    demchiahetbay(a, n);
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
void demchiahetbay(int a[], int n)
{
    int dem=0;
    for (int i = 0; i < n; i++)
    {
        if(a[i]%7==0)
            dem++;
    }
    cout<<"So luong so chia het cho 7 la: "<<dem<<endl;
}