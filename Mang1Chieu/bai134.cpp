#include <iostream>
using namespace std;
void nhap (float [],int &);
int xuat (float [],int);
int main()
{
    float a[50];
    int n;
    nhap(a,n);
    float kq=a[xuat(a,n)];
    cout<<kq;
    return 0;
}
void nhap (float a[],int &n)
{
    cout<<"Nhap so phan tu ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Nhap a["<<i<<"]: ";
        cin>>a[i];
    }
}
int xuat (float a[], int n)
{
    int ln=0;
    for(int i=0;i<n;i++)
    {
        if (a[i]>a[ln])
            ln=i;
    }
    return ln;
}