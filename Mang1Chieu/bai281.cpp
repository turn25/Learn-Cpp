#include <iostream>
using namespace std;
void nhap(int[], int &);
void xuat(int[], int);
void doichochan(int [],int,int);
void doichole(int[],int);
void doicho0(int[], int,int );

int main()
{
    int a[50];
    int n;
    nhap(a, n);
    doichole(a,n);
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
void doichochan(int a[],int vitri)
{
    int t=a[vitri];
    for(int i=vitri;i>0;i--)
        a[i]=a[i-1];
    a[0]=t;
}
void doicho0(int a[],int vitri,int vtchancuoi)
{
    for(int i = vitri; i > vtchancuoi; i--)
		a[i] = a[i - 1];        
	a[vtchancuoi] = 0;
}
void doichole(int a[],int n)
{
    int i, dem;
	int ViTriChanCuoi = 0;
	for(i = 0; i < n; i++)
		if(a[i] % 2 == 0 && a[i] != 0)
			doichochan(a, i);
	for(i = 0; i < n; i++)
		if(a[i] % 2 != 0)
		{
			ViTriChanCuoi = i;
			break;
		}
	for(i; i < n; i++) 
		if(a[i] == 0)
			doicho0(a, i, ViTriChanCuoi);
}
