#include <iostream>
using namespace std;
void nhap(int[], int &);
void demchan(int[], int);
int main()
{
    int a[50];
    int n;
    nhap(a, n);
    demchan(a, n);
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
void demchan(int a[], int n)
{
    int dem=0;
    for (int i = 0; i < n; i++)
    {
        if(a[i]%2==0)
            dem++;
    }
    cout<<"So luong so chan la: "<<dem<<endl;
}