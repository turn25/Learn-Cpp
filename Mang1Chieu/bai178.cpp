#include <iostream>
using namespace std;
void nhap(int[], int &);
void lietke(int[], int, int, int);
int main()
{
    int a[50];
    int x, y;
    do
    {
        cout << "Moi nhap x : ";
        cin >> x;
        cout << "Moi nhap y : ";
        cin >> y;
    }while(x>y);
    int n;
    nhap(a, n);
    lietke(a, n, x, y);
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
void lietke(int a[], int n, int x, int y)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= x && a[i] <= y)
        {
            if(a[i]%2==0)
                cout<<a[i]<<" ";
        }
    }
}