#include <iostream>
using namespace std;
void xuat (int [],int );
int main()
{
    int a[50];
    int n;
    xuat(a,n);
    return 0;
}
void xuat (int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
