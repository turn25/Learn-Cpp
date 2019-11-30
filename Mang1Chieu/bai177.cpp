#include <iostream>
using namespace std;
void nhap(float[], int &);
void lietke(float[], int, float, float);
int main()
{
    float a[50];
    float x, y;
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
void lietke(float a[], int n, float x, float y)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] >= x && a[i] <= y)
            cout << a[i] << " ";
    }
}