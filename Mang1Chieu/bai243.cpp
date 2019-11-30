#include <iostream>
using namespace std;
void nhap(int[], int &);
int tontainguyento(int[], int);
int main()
{
    int a[50];
    int n;
    nhap(a, n);
    cout<<tontainguyento(a, n);
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
int tontainguyento(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int dem=0;
        for(int j=1;j<=n;j++)
        {
            if(a[i]%j==0)
                dem++;
        }
        if (dem==2)
            return 1;
    }
    return 0;
}