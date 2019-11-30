#include <iostream>
using namespace std;
void nhap(int[], int &);
void demdoixung(int[], int);
int main()
{
    int a[50];
    int n;
    nhap(a, n);
    demdoixung(a, n);
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
void demdoixung(int a[], int n)
{
    int dem=0;
    for (int i = 0; i < n; i++)
    {
        int dn=0;
        for (int t=a[i]; t!=0; t=t/10)
        {
            int m= t%10;
            dn=dn*10 + m;
        }
        if(dn==a[i])
            dem++;
    }
    cout<<"So luong so doi xung la: "<<dem<<endl;
}