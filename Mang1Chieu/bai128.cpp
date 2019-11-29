#include <iostream>
using namespace std;
void nhap (float [],int &);
int main()
{
    float a[50];
    int n;
    nhap(a,n);
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
