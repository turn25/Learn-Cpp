#include <iostream>
using namespace std;
void nhap (float [],int &);
void xuat (float [],int);
int xuatgtduong (float [],int);
int main()
{
    float a[50];
    int n;
    nhap(a,n);
    xuat(a,n);
    cout<<xuatgtduong(a,n);
    return 0;
}
void nhap (float a[],int &n)
{
    do 
        {
        cout<<"Nhap so phan tu ";
        cin>>n;
        }while(n<0);    
    for(int i=0;i<n;i++)
    {
        cout<<"Nhap a["<<i<<"]: ";
        cin>>a[i];
    }
}
void xuat(float a[],int n)
{
    for (int i=0;i<n;i++)
        a[i];
}
int xuatgtduong (float a[], int n)
{
    int nn=0;
    for (int i=0;i<n;i++)
    {
        if (a[i]>0)
        {
            if(a[i]<a[nn])
                nn=i;
        }
    }
    if (a[nn]<0)
        return -1;
    return a[nn];
}