#include <iostream>
using namespace std;
void nhap(int[], int &);
void xuat(int[], int);
void doicho(int [],int,int);
void doichochiahet3(int[], int );

int main()
{
    int a[50];
    int n;
    nhap(a, n);
    doichochiahet3(a,n);
    xuat(a,n);
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
void xuat(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
void doicho(int a[], int n, int vitri)
{
	int temp = a[vitri];
	for(int i = vitri; i > 0; i--)
		a[i] = a[i - 1];      
	a[0] = temp;
}
void doichochiahet3(int a[], int n)
{
	for(int i = 0; i < n; i++)
		if(a[i] % 3 == 0)
			doicho(a, n, i);
}